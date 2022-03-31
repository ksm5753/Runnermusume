using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
using UnityEngine.Purchasing;
using System;

public class InAppPurchaser : MonoBehaviour, IStoreListener
{
    private static IStoreController m_StoreController;          // The Unity Purchasing system.
    private static IExtensionProvider m_StoreExtensionProvider; // The store-specific Purchasing subsystems.

    public const string D1 = "com.touchtouch.teamjs.d1";
    public const string D2 = "com.touchtouch.teamjs.d2";
    public const string D3 = "com.touchtouch.teamjs.d3";
    public const string D4 = "com.touchtouch.teamjs.d4";
    public const string D5 = "com.touchtouch.teamjs.d5";
    public const string D6 = "com.touchtouch.teamjs.d6";


    void Start()
    {
        if (m_StoreController == null)
        {
            // Begin to configure our connection to Purchasing
            InitializePurchasing();
        }
    }

    public void InitializePurchasing()
    {
        if (IsInitialized()) return;

        // Create a builder, first passing in a suite of Unity provided stores.
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());

        // Add a product to sell / restore by way of its identifier, associating the general identifier
        // with its store-specific identifiers.
        builder.AddProduct(D1, ProductType.Consumable);
        builder.AddProduct(D2, ProductType.Consumable);
        builder.AddProduct(D3, ProductType.Consumable);
        builder.AddProduct(D4, ProductType.Consumable);
        builder.AddProduct(D5, ProductType.Consumable);
        builder.AddProduct(D6, ProductType.Consumable);

        UnityPurchasing.Initialize(this, builder);
        Debug.Log("##### InitializePurchasing : Initialize");
    }

    private bool IsInitialized()
    {
        // Only say we are initialized if both the Purchasing references are set.
        return m_StoreController != null && m_StoreExtensionProvider != null;
    }

    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
    {

        /*
        뒤끝 영수증 검증 처리
        */
        BackendReturnObject validation = Backend.Receipt.IsValidateGooglePurchase(args.purchasedProduct.receipt, "receiptDescription", false);

        // 영수증 검증에 성공한 경우
        if (validation.IsSuccess())
        {
            // 구매 성공한 제품에 대한 id 체크하여 그에 맞는 보상 
            // A consumable product has been purchased by this user.
            if (String.Equals(args.purchasedProduct.definition.id, D1, StringComparison.Ordinal))
            {
                Debug.Log(string.Format("ProcessPurchase: PASS. Product: '{0}'", args.purchasedProduct.definition.id));
                // The consumable item has been successfully purchased, add 100 coins to the player's in-game score.
                print("결제 성공");
            }
        }
        // 영수증 검증에 실패한 경우 
        else
        {
            // Or ... an unknown product has been purchased by this user. Fill in additional products here....
            Debug.Log(string.Format("ProcessPurchase: FAIL. Unrecognized product: '{0}'", args.purchasedProduct.definition.id));
        }

        // Return a flag indicating whether this product has completely been received, or if the application needs 
        // to be reminded of this purchase at next app launch. Use PurchaseProcessingResult.Pending when still 
        // saving purchased products to the cloud, and when that save is delayed. 
        return PurchaseProcessingResult.Complete;
    }

    void BuyProductID(string productId)
    {
        // If Purchasing has been initialized ...
        if (IsInitialized())
        {
            // ... look up the Product reference with the general product identifier and the Purchasing 
            // system's products collection.
            Product product = m_StoreController.products.WithID(productId);

            // If the look up found a product for this device's store and that product is ready to be sold ... 
            if (product != null && product.availableToPurchase)
            {
                Debug.Log(string.Format("Purchasing product asychronously: '{0}'", product.definition.id));
                // ... buy the product. Expect a response either through ProcessPurchase or OnPurchaseFailed 
                // asynchronously.
                m_StoreController.InitiatePurchase(product);
            }
            // Otherwise ...
            else
            {
                // ... report the product look-up failure situation  
                Debug.Log("BuyProductID: FAIL. Not purchasing product, either is not found or is not available for purchase");
            }
        }
        // Otherwise ...
        else
        {
            // ... report the fact Purchasing has not succeeded initializing yet. Consider waiting longer or 
            // retrying initiailization.
            Debug.Log("BuyProductID FAIL. Not initialized.");
        }
    }

    public void Products(int num)
    {
        switch (num)
        {
            case 1:
                BuyProductID(D1);
                break;
            case 2:
                BuyProductID(D2);
                break;
            case 3:
                BuyProductID(D3);
                break;
            case 4:
                BuyProductID(D4);
                break;
            case 5:
                BuyProductID(D5);
                break;
            case 6:
                BuyProductID(D6);
                break;
        }
    }


    //  
    // --- IStoreListener
    //

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        // Purchasing has succeeded initializing. Collect our Purchasing references.
        Debug.Log("OnInitialized: PASS");

        // Overall Purchasing system, configured with products for this application.
        m_StoreController = controller;
        // Store specific subsystem, for accessing device-specific store features.
        m_StoreExtensionProvider = extensions;
    }


    public void OnInitializeFailed(InitializationFailureReason error)
    {
        // Purchasing set-up has not succeeded. Check error for reason. Consider sharing this reason with the user.
        Debug.Log("OnInitializeFailed InitializationFailureReason:" + error);
    }


    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        // A product purchase attempt did not succeed. Check failureReason for more detail. Consider sharing 
        // this reason with the user to guide their troubleshooting actions.
        Debug.Log(string.Format("OnPurchaseFailed: FAIL. Product: '{0}', PurchaseFailureReason: {1}", product.definition.storeSpecificId, failureReason));
    }
}

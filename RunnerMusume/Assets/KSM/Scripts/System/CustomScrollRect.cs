
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class CustomScrollRect : ScrollRect
{
    bool forParent;
    NestedScrollManager NM;
    ScrollRect parentScrollRect;

    protected override void Awake()
    {
        base.Awake();
        NM = transform.parent.GetComponentInParent<NestedScrollManager>();
        parentScrollRect = transform.parent.GetComponentInParent<ScrollRect>();
    }

    private void Update()
    {
        if(NM == null)
            NM = transform.parent.GetComponentInParent<NestedScrollManager>();

        if (parentScrollRect == null)
            parentScrollRect = transform.parent.GetComponentInParent<ScrollRect>();
    }

    public override void OnBeginDrag(PointerEventData eventData)
    {
        //드래그 시작하는 순간 수평이동이 크면 부모가 드래그 시작한 것, 수직이동이 크면 자식이 드래그 시작한 것
        forParent = Mathf.Abs(eventData.delta.x) > Mathf.Abs(eventData.delta.y);

        if (forParent)
        {
            ExecuteEvents.Execute(NM.gameObject, eventData, ExecuteEvents.beginDragHandler);
            return;
            //NM.OnBeginDrag(eventData);
            //parentScrollRect.OnBeginDrag(eventData);
        }
        else
            base.OnBeginDrag(eventData);
    }

    public override void OnDrag(PointerEventData eventData)
    {
        if (forParent)
        {
            ExecuteEvents.Execute(NM.gameObject, eventData, ExecuteEvents.dragHandler);
            return;
            //NM.OnDrag(eventData);
            //parentScrollRect.OnDrag(eventData);
        }
        else
            base.OnDrag(eventData);
    }

    public override void OnEndDrag(PointerEventData eventData)
    {
        if (forParent)
        {
            ExecuteEvents.Execute(NM.gameObject, eventData, ExecuteEvents.endDragHandler);
            return;
            //NM.OnEndDrag(eventData);
            //parentScrollRect.OnEndDrag(eventData);
        }
        else
            base.OnEndDrag(eventData);
    }
}


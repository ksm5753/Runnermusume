
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
        //�巡�� �����ϴ� ���� �����̵��� ũ�� �θ� �巡�� ������ ��, �����̵��� ũ�� �ڽ��� �巡�� ������ ��
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


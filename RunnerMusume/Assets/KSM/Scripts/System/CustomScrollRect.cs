
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class CustomScrollRect : ScrollRect
{

    //��CustomScrollRect����
    private CustomScrollRect m_Parent;

    public enum Direction
    {
        Horizontal,
        Vertical
    }
    //��������
    private Direction m_Direction = Direction.Horizontal;
    //��ǰ��������
    private Direction m_BeginDragDirection = Direction.Horizontal;

    protected override void Awake()
    {
        base.Awake();
        //�ҵ�������
        Transform parent = transform.parent;
        if (parent)
        {
            m_Parent = parent.GetComponentInParent<CustomScrollRect>();
        }
        m_Direction = this.horizontal ? Direction.Horizontal : Direction.Vertical;
    }


    public override void OnBeginDrag(PointerEventData eventData)
    {
        if (m_Parent)
        {
            m_BeginDragDirection = Mathf.Abs(eventData.delta.x) > Mathf.Abs(eventData.delta.y) ? Direction.Horizontal : Direction.Vertical;
            if (m_BeginDragDirection != m_Direction)
            {
                //��ǰ�������򲻵��ڻ������򣬽��¼�����������
                ExecuteEvents.Execute(m_Parent.gameObject, eventData, ExecuteEvents.beginDragHandler);
                return;
            }
        }

        base.OnBeginDrag(eventData);
    }
    public override void OnDrag(PointerEventData eventData)
    {
        if (m_Parent)
        {
            if (m_BeginDragDirection != m_Direction)
            {
                //��ǰ�������򲻵��ڻ������򣬽��¼�����������
                ExecuteEvents.Execute(m_Parent.gameObject, eventData, ExecuteEvents.dragHandler);
                return;
            }
        }
        base.OnDrag(eventData);
    }

    public override void OnEndDrag(PointerEventData eventData)
    {
        if (m_Parent)
        {
            if (m_BeginDragDirection != m_Direction)
            {
                //��ǰ�������򲻵��ڻ������򣬽��¼�����������
                ExecuteEvents.Execute(m_Parent.gameObject, eventData, ExecuteEvents.endDragHandler);
                return;
            }
        }
        base.OnEndDrag(eventData);
    }

    public override void OnScroll(PointerEventData data)
    {
        if (m_Parent)
        {
            if (m_BeginDragDirection != m_Direction)
            {
                //��ǰ�������򲻵��ڻ������򣬽��¼�����������
                ExecuteEvents.Execute(m_Parent.gameObject, data, ExecuteEvents.scrollHandler);
                return;
            }
        }
        base.OnScroll(data);
    }
}


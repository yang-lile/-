#define MaxSize 100

typedef int ElemType;
typedef int Status;
typedef struct MyQueue MyQueue;

struct MyQueue {
    ElemType arr[MaxSize];
    int f, b;
    Status (*push)(MyQueue*, ElemType);
    Status (*pop)(MyQueue*, ElemType*);
    Status (*getLength)(MyQueue*);
};

Status _getLength(MyQueue* q) {
    return q->f < q->b ? q->b - q->f - 1 : MaxSize - q->b + q->f + 1;
}

Status _push(MyQueue* q, ElemType e) {
    if (q->f == q->b) return -1;
    q->arr[q->b > 0 ? q->b - 1 : MaxSize - 1] = e;
    q->b = (q->b + 1) % MaxSize;
    return 0;
}

Status _pop(MyQueue* q, ElemType* e) {
    if (q->f == q->b - 1) return -1;
    *e = q->arr[q->f];
    q->f = (q->f + 1) % MaxSize;
    return 0;
}

Status initMyQueue(MyQueue* q) {
    q->f = 0;
    q->b = 1;
    q->push = _push;
    q->pop = _pop;
    q->getLength = _getLength;
}
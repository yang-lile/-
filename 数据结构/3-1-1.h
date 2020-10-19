#define MaxSize 100

typedef char ElemType;
typedef int Status;
typedef struct MyStack MyStack;

struct MyStack {
    ElemType arr[MaxSize];
    int len;
    Status (*push)(MyStack *, ElemType);
    Status (*pop)(MyStack *, ElemType *);
    Status (*isEmpty)(MyStack *);
};

Status _push(MyStack *stack, ElemType e) {
    if (stack->len == MaxSize) return -1;
    stack->arr[stack->len] = e;
    stack->len++;
    return 0;
}

Status _isEmpty(MyStack *stack) { return stack->len ? 0 : 1; }

Status _pop(MyStack *stack, ElemType *e) {
    if (_isEmpty(stack)) return -1;
    stack->len--;
    *e = stack->arr[stack->len];
    return 0;
}

Status initMyStack(MyStack *stack) {
    stack->len = 0;
    stack->push = _push;
    stack->pop = _pop;
    stack->isEmpty = _isEmpty;
}

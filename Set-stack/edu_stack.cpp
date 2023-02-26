// Реализация стека в C++

#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10
int size = 0;

// Создаем стек
struct stack {
  int items[MAX];
  int top;
};
typedef struct stack st;

void createEmptyStack(st *s) {
  s->top = -1;
}

// Проверяем, не заполнен ли стек
int isfull(st *s) {
  if (s->top == MAX - 1)
    return 1;
  else
    return 0;
}

// Проверяем, не пуст ли стек
int isempty(st *s) {
  if (s->top == -1)
    return 1;
  else
    return 0;
}

// Добавляем элемент в стек
void push(st *s, int newitem) {
  if (isfull(s)) {
    printf("Стек заполнен");
  } else {
    s->top++;
    s->items[s->top] = newitem;
  }
  size++;
}

// Удаляем элемент из стека
void pop(st *s) {
  if (isempty(s)) {
    printf("\n Стек пуст \n");
  } else {
    printf("Удален элемент= %d", s->items[s->top]);
    s->top--;
  }
  size--;
  cout << endl;
}

// Выводим в консоль элементы стека
void printStack(st *s) {
  printf("Стек: ");
  for (int i = 0; i < size; i++) {
    cout << s->items[i] << " ";
  }
  cout << endl;
}

// Функция main
int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));

  createEmptyStack(s);

  push(s, 1);
  push(s, 2);
  push(s, 3);
  push(s, 4);

  printStack(s);

  pop(s);

  cout << "\nПосле удаления\n";
  printStack(s);
}
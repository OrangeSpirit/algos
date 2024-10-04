#include <iostream>

struct node_t {
  int data = 0;
  node_t *next = nullptr;
};

void go_through(node_t *p) {
  while (p != nullptr) {
    std::cout << "node_t *p = " << p << "     p->data = " << p->data << "   p->next = " << p->next << std::endl;
    p = p->next;
  }
}

void delete_p(node_t *p) {
  node_t *temp = nullptr;
  while (p != nullptr) {
    std::cout << "node_t *p = " << p << "     p->data = " << p->data << "   p->next = " << p->next << std::endl;
    p->data = 0;
    temp = p->next;
    delete p;
    p = temp;
  }
}

int main() {
  node_t *p_begin = new node_t;
  node_t *p = p_begin;

  for(int i = 0; i < 5; i++) {
    p->data = i + 1;
    p->next = new node_t;
    p = p->next;
  }
  p->data = 777;
  p->next = nullptr;

  go_through(p_begin);
  std::cout << std::endl;
  delete_p(p_begin);


  // p_begin = nullptr;
  std::cout << "p_begin = " << p_begin << std::endl;

  p_begin = new node_t;
  std::cout << "p_begin = " << p_begin << std::endl;

  std::cout << "p_begin->data = " << p_begin->data << std::endl;
  std::cout << "p_begin->next = " << p_begin->next << std::endl;


  
  go_through(p_begin);
  delete_p(p_begin);

  return 0;
}

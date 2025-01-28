#include <iostream>
#include "custom_ops.h"
using namespace std;

at::Tensor custom_minimum(const at::Tensor& tensor1,const at::Tensor& tensor2){
  at::Tensor a =at::multiply(tensor1,-1);
  at::Tensor b =at::multiply(tensor2,-1);
 at::Tensor min_value =at::maximum(a,b);
  return at::multiply(min_value,-1);
};

at::Tensor torch_minimum(const at::Tensor& tensor1,const at::Tensor& tensor2){
  return at::minimum(tensor1,tensor2);
};

at::Tensor custom_special_entr(const at::Tensor& tensor1){
  at::Tensor c = at::multiply(-a , at::log(a));
  auto ind = a < 0;
  c.index_put_({ind},'-inf');
  auto ind2 = a==0;
  c.index_put_({inde2},0.0000);
  return c ;
}

at::Tensor
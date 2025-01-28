#ifndef CUSTOM_MINIMUM_H
#define CUSTOM_MINIMUM_H

#include <torch/torch.h>

at::Tensor custom_minimum(const at::Tensor& tensor1, const at::Tensor& tensor2);
at::Tensor torch_minimum(const at::Tensor& tensor1, const at::Tensor& tensor2);

#endif // CUSTOM_MINIMUM_H


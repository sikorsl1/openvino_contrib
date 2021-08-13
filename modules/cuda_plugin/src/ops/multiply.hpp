// Copyright (C) 2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "cudnn_tensor_op_base.hpp"

namespace CUDAPlugin {

class MultiplyOp : public CuDnnTensorOpBase {
  public:
    MultiplyOp(const CUDA::CreationContext& context, const std::shared_ptr<ngraph::Node>& node,
               IndexCollection&& inputIds, IndexCollection&& outputIds);
};

}  // namespace CUDAPlugin
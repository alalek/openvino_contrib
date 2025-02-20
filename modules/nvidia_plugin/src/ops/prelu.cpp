// Copyright (C) 2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#include "prelu.hpp"

#include <fmt/format.h>

#include <gsl/gsl_assert>

#include "cuda_operation_registry.hpp"

namespace ov {
namespace nvidia_gpu {

OPERATION_REGISTER(PReluOp, PRelu)

}  // namespace nvidia_gpu
}  // namespace ov

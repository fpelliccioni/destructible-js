#include "destructible.hpp"

napi_value Init(napi_env env, napi_value exports) {
    return Destructible::Init(env, exports);
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)

#include "UnityEngine_Rendering_StencilState.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Rendering", "StencilState");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Rendering::StencilState UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_defaultValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilState ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::StencilState));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::StencilState>(*(UnityEngine_CoreModule::UnityEngine::Rendering::StencilState*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::_ctor(bool enabled, uint8_t readMask, uint8_t writeMask, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp passOperation, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp failOperation, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp zFailOperation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "System.Byte", "System.Byte", "UnityEngine.Rendering.CompareFunction", "UnityEngine.Rendering.StencilOp", "UnityEngine.Rendering.StencilOp", "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&enabled;
	params[1] = (intptr_t)&readMask;
	params[2] = (intptr_t)&writeMask;
	params[3] = (intptr_t)&compareFunction;
	params[4] = (intptr_t)&passOperation;
	params[5] = (intptr_t)&failOperation;
	params[6] = (intptr_t)&zFailOperation;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::_ctor(bool enabled, uint8_t readMask, uint8_t writeMask, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunctionFront, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp passOperationFront, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp failOperationFront, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp zFailOperationFront, UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction compareFunctionBack, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp passOperationBack, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp failOperationBack, UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp zFailOperationBack)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "System.Byte", "System.Byte", "UnityEngine.Rendering.CompareFunction", "UnityEngine.Rendering.StencilOp", "UnityEngine.Rendering.StencilOp", "UnityEngine.Rendering.StencilOp", "UnityEngine.Rendering.CompareFunction", "UnityEngine.Rendering.StencilOp", "UnityEngine.Rendering.StencilOp", "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)&enabled;
	params[1] = (intptr_t)&readMask;
	params[2] = (intptr_t)&writeMask;
	params[3] = (intptr_t)&compareFunctionFront;
	params[4] = (intptr_t)&passOperationFront;
	params[5] = (intptr_t)&failOperationFront;
	params[6] = (intptr_t)&zFailOperationFront;
	params[7] = (intptr_t)&compareFunctionBack;
	params[8] = (intptr_t)&passOperationBack;
	params[9] = (intptr_t)&failOperationBack;
	params[10] = (intptr_t)&zFailOperationBack;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_enabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_enabled");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::set_enabled(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_enabled", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint8_t UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_readMask()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_readMask");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
uint8_t UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_writeMask()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_writeMask");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::SetCompareFunction(UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCompareFunction", std::vector<std::string> { "UnityEngine.Rendering.CompareFunction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::SetPassOperation(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPassOperation", std::vector<std::string> { "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::SetFailOperation(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetFailOperation", std::vector<std::string> { "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::SetZFailOperation(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetZFailOperation", std::vector<std::string> { "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_compareFunctionFront()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_compareFunctionFront");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction>(*(UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::set_compareFunctionFront(UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_compareFunctionFront", std::vector<std::string> { "UnityEngine.Rendering.CompareFunction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_passOperationFront()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_passOperationFront");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp>(*(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::set_passOperationFront(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_passOperationFront", std::vector<std::string> { "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_failOperationFront()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_failOperationFront");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp>(*(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::set_failOperationFront(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_failOperationFront", std::vector<std::string> { "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_zFailOperationFront()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_zFailOperationFront");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp>(*(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::set_zFailOperationFront(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_zFailOperationFront", std::vector<std::string> { "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_compareFunctionBack()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_compareFunctionBack");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction>(*(UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::set_compareFunctionBack(UnityEngine_CoreModule::UnityEngine::Rendering::CompareFunction value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_compareFunctionBack", std::vector<std::string> { "UnityEngine.Rendering.CompareFunction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_passOperationBack()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_passOperationBack");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp>(*(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::set_passOperationBack(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_passOperationBack", std::vector<std::string> { "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_failOperationBack()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_failOperationBack");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp>(*(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::set_failOperationBack(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_failOperationBack", std::vector<std::string> { "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::get_zFailOperationBack()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_zFailOperationBack");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp>(*(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::set_zFailOperationBack(UnityEngine_CoreModule::UnityEngine::Rendering::StencilOp value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_zFailOperationBack", std::vector<std::string> { "UnityEngine.Rendering.StencilOp" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::Equals(UnityEngine_CoreModule::UnityEngine::Rendering::StencilState other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "UnityEngine.Rendering.StencilState" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_CoreModule::UnityEngine::Rendering::StencilState::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}

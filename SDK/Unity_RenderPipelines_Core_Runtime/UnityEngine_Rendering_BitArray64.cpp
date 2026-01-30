#include "UnityEngine_Rendering_BitArray64.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Core.Runtime.dll", "UnityEngine.Rendering", "BitArray64");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
uint32_t Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::get_capacity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_capacity");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::get_allFalse()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_allFalse");
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::get_allTrue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_allTrue");
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
mscorlib::System::String* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::get_humanizedData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_humanizedData");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::get_Item(uint32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
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
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::set_Item(uint32_t index, bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Item", std::vector<std::string> { "System.UInt32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::_ctor(uint64_t initValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&initValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::_ctor(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::UInt32>* bitIndexTrue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<System.UInt32>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bitIndexTrue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::op_OnesComplement(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 a)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_OnesComplement", std::vector<std::string> { "UnityEngine.Rendering.BitArray64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&a;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64*)il2cpp_object_unbox(returnValue));
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::op_BitwiseOr(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_BitwiseOr", std::vector<std::string> { "UnityEngine.Rendering.BitArray64", "UnityEngine.Rendering.BitArray64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64*)il2cpp_object_unbox(returnValue));
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::op_BitwiseAnd(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_BitwiseAnd", std::vector<std::string> { "UnityEngine.Rendering.BitArray64", "UnityEngine.Rendering.BitArray64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64*)il2cpp_object_unbox(returnValue));
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::BitAnd(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BitAnd", std::vector<std::string> { "UnityEngine.Rendering.IBitArray" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::BitOr(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BitOr", std::vector<std::string> { "UnityEngine.Rendering.IBitArray" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray*)returnValue;
}
Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray* Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::BitNot()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BitNot");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::IBitArray*)returnValue;
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::op_Equality(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "UnityEngine.Rendering.BitArray64", "UnityEngine.Rendering.BitArray64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::operator==(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64& a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64& b)
{
	return Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::op_Equality(a, b);
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::op_Inequality(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64 b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Inequality", std::vector<std::string> { "UnityEngine.Rendering.BitArray64", "UnityEngine.Rendering.BitArray64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::operator!=(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64& a, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64& b)
{
	return Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::op_Inequality(a, b);
}
bool Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::Equals(mscorlib::System::Object* obj)
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
int32_t Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::BitArray64::GetHashCode()
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

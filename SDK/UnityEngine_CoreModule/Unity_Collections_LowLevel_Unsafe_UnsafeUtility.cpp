#include "Unity_Collections_LowLevel_Unsafe_UnsafeUtility.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void* UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Malloc(int64_t size, int32_t alignment, UnityEngine_CoreModule::Unity::Collections::Allocator allocator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Malloc", std::vector<std::string> { "System.Int64", "System.Int32", "Unity.Collections.Allocator" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&size;
	params[1] = (intptr_t)&alignment;
	params[2] = (intptr_t)&allocator;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (void*)returnValue;
}
void UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Free(void* memory, UnityEngine_CoreModule::Unity::Collections::Allocator allocator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Free", std::vector<std::string> { "System.Void*", "Unity.Collections.Allocator" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)memory;
	params[1] = (intptr_t)&allocator;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCpy(void* destination, void* source, int64_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MemCpy", std::vector<std::string> { "System.Void*", "System.Void*", "System.Int64" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)destination;
	params[1] = (intptr_t)source;
	params[2] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemSet(void* destination, uint8_t value, int64_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MemSet", std::vector<std::string> { "System.Void*", "System.Byte", "System.Int64" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)destination;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemClear(void* destination, int64_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MemClear", std::vector<std::string> { "System.Void*", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)destination;
	params[1] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::SizeOf(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SizeOf", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittable(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsBlittable", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
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
bool UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittableValueType(mscorlib::System::Type* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsBlittableValueType", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
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
mscorlib::System::String* UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForTypeNonBlittableImpl(mscorlib::System::Type* t, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetReasonForTypeNonBlittableImpl", std::vector<std::string> { "System.Type", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsArrayBlittable(mscorlib::System::Array* arr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsArrayBlittable", std::vector<std::string> { "System.Array" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)arr;
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
mscorlib::System::String* UnityEngine_CoreModule::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForArrayNonBlittable(mscorlib::System::Array* arr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetReasonForArrayNonBlittable", std::vector<std::string> { "System.Array" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)arr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}

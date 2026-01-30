#include "System_Runtime_InteropServices_GCHandle.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::InteropServices::GCHandle::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.InteropServices", "GCHandle");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::InteropServices::GCHandle::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::InteropServices::GCHandle::_ctor(intptr_t h)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&h;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::InteropServices::GCHandle::_ctor(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::InteropServices::GCHandle::_ctor(mscorlib::System::Object* value, mscorlib::System::Runtime::InteropServices::GCHandleType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.Runtime.InteropServices.GCHandleType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Runtime::InteropServices::GCHandle::get_IsAllocated()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsAllocated");
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
mscorlib::System::Object* mscorlib::System::Runtime::InteropServices::GCHandle::get_Target()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Target");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
void mscorlib::System::Runtime::InteropServices::GCHandle::set_Target(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Target", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t mscorlib::System::Runtime::InteropServices::GCHandle::AddrOfPinnedObject()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddrOfPinnedObject");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Runtime::InteropServices::GCHandle mscorlib::System::Runtime::InteropServices::GCHandle::Alloc(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Alloc", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::InteropServices::GCHandle ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::InteropServices::GCHandle));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::InteropServices::GCHandle>(*(mscorlib::System::Runtime::InteropServices::GCHandle*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Runtime::InteropServices::GCHandle mscorlib::System::Runtime::InteropServices::GCHandle::Alloc(mscorlib::System::Object* value, mscorlib::System::Runtime::InteropServices::GCHandleType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Alloc", std::vector<std::string> { "System.Object", "System.Runtime.InteropServices.GCHandleType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)value;
	params[1] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::InteropServices::GCHandle ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::InteropServices::GCHandle));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::InteropServices::GCHandle>(*(mscorlib::System::Runtime::InteropServices::GCHandle*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Runtime::InteropServices::GCHandle::Free()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Free");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t mscorlib::System::Runtime::InteropServices::GCHandle::op_Explicit(mscorlib::System::Runtime::InteropServices::GCHandle value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Runtime.InteropServices.GCHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Runtime::InteropServices::GCHandle mscorlib::System::Runtime::InteropServices::GCHandle::op_Explicit(intptr_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::InteropServices::GCHandle ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::InteropServices::GCHandle));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::InteropServices::GCHandle>(*(mscorlib::System::Runtime::InteropServices::GCHandle*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Runtime::InteropServices::GCHandle::CheckCurrentDomain(int32_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckCurrentDomain", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
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
mscorlib::System::Object* mscorlib::System::Runtime::InteropServices::GCHandle::GetTarget(int32_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTarget", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
int32_t mscorlib::System::Runtime::InteropServices::GCHandle::GetTargetHandle(mscorlib::System::Object* obj, int32_t handle, mscorlib::System::Runtime::InteropServices::GCHandleType type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTargetHandle", std::vector<std::string> { "System.Object", "System.Int32", "System.Runtime.InteropServices.GCHandleType" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)obj;
	params[1] = (intptr_t)&handle;
	params[2] = (intptr_t)&type;
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
void mscorlib::System::Runtime::InteropServices::GCHandle::FreeHandle(int32_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FreeHandle", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t mscorlib::System::Runtime::InteropServices::GCHandle::GetAddrOfPinnedObject(int32_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAddrOfPinnedObject", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Runtime::InteropServices::GCHandle::op_Equality(mscorlib::System::Runtime::InteropServices::GCHandle a, mscorlib::System::Runtime::InteropServices::GCHandle b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Equality", std::vector<std::string> { "System.Runtime.InteropServices.GCHandle", "System.Runtime.InteropServices.GCHandle" });
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
bool mscorlib::System::Runtime::InteropServices::operator==(mscorlib::System::Runtime::InteropServices::GCHandle& a, mscorlib::System::Runtime::InteropServices::GCHandle& b)
{
	return mscorlib::System::Runtime::InteropServices::GCHandle::op_Equality(a, b);
}
bool mscorlib::System::Runtime::InteropServices::GCHandle::Equals(mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)o;
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
int32_t mscorlib::System::Runtime::InteropServices::GCHandle::GetHashCode()
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
mscorlib::System::Runtime::InteropServices::GCHandle mscorlib::System::Runtime::InteropServices::GCHandle::FromIntPtr(intptr_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromIntPtr", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Runtime::InteropServices::GCHandle ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Runtime::InteropServices::GCHandle));
		return ret;
	}
	return static_cast<mscorlib::System::Runtime::InteropServices::GCHandle>(*(mscorlib::System::Runtime::InteropServices::GCHandle*)il2cpp_object_unbox(returnValue));
}
intptr_t mscorlib::System::Runtime::InteropServices::GCHandle::ToIntPtr(mscorlib::System::Runtime::InteropServices::GCHandle value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToIntPtr", std::vector<std::string> { "System.Runtime.InteropServices.GCHandle" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}

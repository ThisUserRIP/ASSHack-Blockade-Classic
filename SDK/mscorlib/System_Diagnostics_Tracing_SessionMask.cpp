#include "System_Diagnostics_Tracing_SessionMask.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::SessionMask::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "SessionMask");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::SessionMask::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::SessionMask::_ctor(uint32_t mask)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mask;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Diagnostics::Tracing::SessionMask::IsEqualOrSupersetOf(mscorlib::System::Diagnostics::Tracing::SessionMask m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEqualOrSupersetOf", std::vector<std::string> { "System.Diagnostics.Tracing.SessionMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&m;
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
mscorlib::System::Diagnostics::Tracing::SessionMask mscorlib::System::Diagnostics::Tracing::SessionMask::get_All()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_All");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::SessionMask ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::SessionMask));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::SessionMask>(*(mscorlib::System::Diagnostics::Tracing::SessionMask*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::SessionMask mscorlib::System::Diagnostics::Tracing::SessionMask::FromId(int32_t perEventSourceSessionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&perEventSourceSessionId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::SessionMask ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::SessionMask));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::SessionMask>(*(mscorlib::System::Diagnostics::Tracing::SessionMask*)il2cpp_object_unbox(returnValue));
}
uint64_t mscorlib::System::Diagnostics::Tracing::SessionMask::ToEventKeywords()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToEventKeywords");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::SessionMask mscorlib::System::Diagnostics::Tracing::SessionMask::FromEventKeywords(uint64_t m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromEventKeywords", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&m;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::SessionMask ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::SessionMask));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::SessionMask>(*(mscorlib::System::Diagnostics::Tracing::SessionMask*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::System::Diagnostics::Tracing::SessionMask::get_Item(int32_t perEventSourceSessionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&perEventSourceSessionId;
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
void mscorlib::System::Diagnostics::Tracing::SessionMask::set_Item(int32_t perEventSourceSessionId, bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Item", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&perEventSourceSessionId;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint64_t mscorlib::System::Diagnostics::Tracing::SessionMask::op_Explicit(mscorlib::System::Diagnostics::Tracing::SessionMask m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Diagnostics.Tracing.SessionMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&m;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
uint32_t mscorlib::System::Diagnostics::Tracing::SessionMask::op_Explicit(mscorlib::System::Diagnostics::Tracing::SessionMask m)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Explicit", std::vector<std::string> { "System.Diagnostics.Tracing.SessionMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&m;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}

#include "System_Diagnostics_Tracing_EventDataAttribute.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::EventDataAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "EventDataAttribute");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::EventDataAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::EventDataAttribute::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Diagnostics::Tracing::EventLevel mscorlib::System::Diagnostics::Tracing::EventDataAttribute::get_Level()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Level");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventLevel ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventLevel));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventLevel>(*(mscorlib::System::Diagnostics::Tracing::EventLevel*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::EventOpcode mscorlib::System::Diagnostics::Tracing::EventDataAttribute::get_Opcode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Opcode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventOpcode ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventOpcode));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventOpcode>(*(mscorlib::System::Diagnostics::Tracing::EventOpcode*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::EventKeywords mscorlib::System::Diagnostics::Tracing::EventDataAttribute::get_Keywords()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Keywords");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventKeywords ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventKeywords));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventKeywords>(*(mscorlib::System::Diagnostics::Tracing::EventKeywords*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::EventTags mscorlib::System::Diagnostics::Tracing::EventDataAttribute::get_Tags()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Tags");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventTags ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventTags));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventTags>(*(mscorlib::System::Diagnostics::Tracing::EventTags*)il2cpp_object_unbox(returnValue));
}

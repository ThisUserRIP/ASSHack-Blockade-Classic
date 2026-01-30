#include "System_Diagnostics_Tracing_TraceLoggingEventTypes.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "TraceLoggingEventTypes");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes::_ctor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventTags tags, IL2CPP::Array<mscorlib::System::Type*>* types)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.EventTags", "System.Type[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&tags;
	params[2] = (intptr_t)types;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes::_ctor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventTags tags, IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* paramInfos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.EventTags", "System.Reflection.ParameterInfo[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&tags;
	params[2] = (intptr_t)paramInfos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes::_ctor(mscorlib::System::Diagnostics::Tracing::EventTags tags, mscorlib::System::String* defaultName, IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Diagnostics.Tracing.EventTags", "System.String", "System.Diagnostics.Tracing.TraceLoggingTypeInfo[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&tags;
	params[1] = (intptr_t)defaultName;
	params[2] = (intptr_t)typeInfos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Diagnostics::Tracing::EventTags mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes::get_Tags()
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
mscorlib::System::Diagnostics::Tracing::NameInfo* mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes::GetNameInfo(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventTags tags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNameInfo", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.EventTags" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&tags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Diagnostics::Tracing::NameInfo*)returnValue;
}
IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes::MakeArray(IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* paramInfos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakeArray", std::vector<std::string> { "System.Reflection.ParameterInfo[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)paramInfos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>*)returnValue;
}
IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes::MakeArray(IL2CPP::Array<mscorlib::System::Type*>* types)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakeArray", std::vector<std::string> { "System.Type[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)types;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo*>*)returnValue;
}

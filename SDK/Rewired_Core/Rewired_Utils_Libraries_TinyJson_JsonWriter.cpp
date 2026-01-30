#include "Rewired_Utils_Libraries_TinyJson_JsonWriter.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Libraries::TinyJson::JsonWriter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Libraries.TinyJson", "JsonWriter");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Libraries::TinyJson::JsonWriter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Action_2<mscorlib::System::Text::StringBuilder, mscorlib::System::Object>* Rewired_Core::Rewired::Utils::Libraries::TinyJson::JsonWriter::get_appendValueDelegate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_appendValueDelegate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Action_2<mscorlib::System::Text::StringBuilder, mscorlib::System::Object>*)returnValue;
}
mscorlib::System::String* Rewired_Core::Rewired::Utils::Libraries::TinyJson::JsonWriter::ToJson(mscorlib::System::Object* item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToJson", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)item;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::Utils::Libraries::TinyJson::JsonWriter::MMsBhLqnUyFJOJPGXJPYTgSMElfK(mscorlib::System::Text::StringBuilder* A_0, mscorlib::System::Object* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MMsBhLqnUyFJOJPGXJPYTgSMElfK");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_0;
	params[1] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

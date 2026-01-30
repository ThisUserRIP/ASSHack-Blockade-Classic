#include "Rewired_UI_ControlMapper_ControlMapper_InputGridEntryList_FieldSet.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_FieldSet::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList::GetIl2CppClass(), "FieldSet");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_FieldSet::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_FieldSet::_ctor(UnityEngine_CoreModule::UnityEngine::GameObject* groupContainer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)groupContainer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

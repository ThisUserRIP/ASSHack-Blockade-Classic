#include "System_ComponentModel_EventHandlerList_ListEntry.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::EventHandlerList_ListEntry::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::ComponentModel::EventHandlerList::GetIl2CppClass(), "ListEntry");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::EventHandlerList_ListEntry::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::EventHandlerList_ListEntry::_ctor(mscorlib::System::Object* key, mscorlib::System::Delegate* handler, System::ComponentModel::EventHandlerList_ListEntry* next)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.Delegate", "System.ComponentModel.EventHandlerList/ListEntry" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)key;
	params[1] = (intptr_t)handler;
	params[2] = (intptr_t)next;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

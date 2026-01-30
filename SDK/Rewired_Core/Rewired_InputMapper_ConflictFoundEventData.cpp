#include "Rewired_InputMapper_ConflictFoundEventData.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::InputMapper_ConflictFoundEventData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::InputMapper::GetIl2CppClass(), "ConflictFoundEventData");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::InputMapper_ConflictFoundEventData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::InputMapper_ConflictFoundEventData::_ctor(Rewired_Core::Rewired::InputMapper* mapper, mscorlib::System::Action_1<Rewired_Core::Rewired::InputMapper_ConflictResponse>* responseCallback, Rewired_Core::Rewired::ElementAssignmentInfo* assignment, mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* conflicts, bool isProtected)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.InputMapper", "System.Action`1<Rewired.InputMapper/ConflictResponse>", "Rewired.ElementAssignmentInfo", "System.Collections.Generic.IList`1<Rewired.ElementAssignmentConflictInfo>", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)mapper;
	params[1] = (intptr_t)responseCallback;
	params[2] = (intptr_t)assignment;
	params[3] = (intptr_t)conflicts;
	params[4] = (intptr_t)&isProtected;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

#include "Rewired_Utils_Libraries_TinyJson_JsonTools.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Libraries::TinyJson::JsonTools::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Libraries.TinyJson", "JsonTools");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Libraries::TinyJson::JsonTools::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}

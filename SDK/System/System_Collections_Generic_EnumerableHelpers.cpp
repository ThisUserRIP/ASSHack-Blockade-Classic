#include "System_Collections_Generic_EnumerableHelpers.h"

IL2CPP::Il2CppClass* System::System::Collections::Generic::EnumerableHelpers::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Collections.Generic", "EnumerableHelpers");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Collections::Generic::EnumerableHelpers::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}

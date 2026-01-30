#include "Microsoft_Win32_UnsafeNativeMethods.h"

IL2CPP::Il2CppClass* mscorlib::Microsoft::Win32::UnsafeNativeMethods::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Microsoft.Win32", "UnsafeNativeMethods");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Microsoft::Win32::UnsafeNativeMethods::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}

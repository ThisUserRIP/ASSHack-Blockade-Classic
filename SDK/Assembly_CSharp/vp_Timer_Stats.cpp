#include "vp_Timer_Stats.h"

IL2CPP::Il2CppClass* Assembly_CSharp::vp_Timer_Stats::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::vp_Timer::GetIl2CppClass(), "Stats");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::vp_Timer_Stats::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}

#include "vp_ComponentPreset_Field.h"

IL2CPP::Il2CppClass* Assembly_CSharp::vp_ComponentPreset_Field::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::vp_ComponentPreset::GetIl2CppClass(), "Field");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::vp_ComponentPreset_Field::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::vp_ComponentPreset_Field::_ctor(mscorlib::System::RuntimeFieldHandle fieldHandle, mscorlib::System::Object* args)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.RuntimeFieldHandle", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&fieldHandle;
	params[1] = (intptr_t)args;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

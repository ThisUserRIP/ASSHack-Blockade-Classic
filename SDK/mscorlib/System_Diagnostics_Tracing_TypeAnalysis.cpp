#include "System_Diagnostics_Tracing_TypeAnalysis.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::TypeAnalysis::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "TypeAnalysis");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::TypeAnalysis::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::TypeAnalysis::_ctor(mscorlib::System::Type* dataType, mscorlib::System::Diagnostics::Tracing::EventDataAttribute* eventAttrib, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Type>* recursionCheck)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type", "System.Diagnostics.Tracing.EventDataAttribute", "System.Collections.Generic.List`1<System.Type>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dataType;
	params[1] = (intptr_t)eventAttrib;
	params[2] = (intptr_t)recursionCheck;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

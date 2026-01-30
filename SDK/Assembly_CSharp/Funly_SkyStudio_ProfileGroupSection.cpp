#include "Funly_SkyStudio_ProfileGroupSection.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Funly.SkyStudio", "ProfileGroupSection");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection::_ctor(mscorlib::System::String* sectionTitle, mscorlib::System::String* sectionKey, mscorlib::System::String* sectionIcon, mscorlib::System::String* dependsOnFeature, bool dependsOnValue, IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*>* groups)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String", "System.Boolean", "Funly.SkyStudio.ProfileGroupDefinition[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)sectionTitle;
	params[1] = (intptr_t)sectionKey;
	params[2] = (intptr_t)sectionIcon;
	params[3] = (intptr_t)dependsOnFeature;
	params[4] = (intptr_t)&dependsOnValue;
	params[5] = (intptr_t)groups;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

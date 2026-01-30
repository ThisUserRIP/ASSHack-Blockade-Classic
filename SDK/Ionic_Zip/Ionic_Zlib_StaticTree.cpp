#include "Ionic_Zlib_StaticTree.h"

IL2CPP::Il2CppClass* Ionic_Zip::Ionic::Zlib::StaticTree::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Ionic.Zip.dll", "Ionic.Zlib", "StaticTree");
	return il2cppclass;
}
mscorlib::System::Type* Ionic_Zip::Ionic::Zlib::StaticTree::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Ionic_Zip::Ionic::Zlib::StaticTree::_ctor(IL2CPP::Array<int16_t>* treeCodes, IL2CPP::Array<int32_t>* extraBits, int32_t extraBase, int32_t elems, int32_t maxLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int16[]", "System.Int32[]", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)treeCodes;
	params[1] = (intptr_t)extraBits;
	params[2] = (intptr_t)&extraBase;
	params[3] = (intptr_t)&elems;
	params[4] = (intptr_t)&maxLength;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::StaticTree::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

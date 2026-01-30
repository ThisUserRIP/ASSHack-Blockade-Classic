#include "Ionic_Zlib_InflateCodes.h"

IL2CPP::Il2CppClass* Ionic_Zip::Ionic::Zlib::InflateCodes::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Ionic.Zip.dll", "Ionic.Zlib", "InflateCodes");
	return il2cppclass;
}
mscorlib::System::Type* Ionic_Zip::Ionic::Zlib::InflateCodes::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Ionic_Zip::Ionic::Zlib::InflateCodes::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::InflateCodes::Init(int32_t bl, int32_t bd, IL2CPP::Array<int32_t>* tl, int32_t tl_index, IL2CPP::Array<int32_t>* td, int32_t td_index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32[]", "System.Int32", "System.Int32[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&bl;
	params[1] = (intptr_t)&bd;
	params[2] = (intptr_t)tl;
	params[3] = (intptr_t)&tl_index;
	params[4] = (intptr_t)td;
	params[5] = (intptr_t)&td_index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Ionic_Zip::Ionic::Zlib::InflateCodes::Process(Ionic_Zip::Ionic::Zlib::InflateBlocks* blocks, int32_t r)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Process", std::vector<std::string> { "Ionic.Zlib.InflateBlocks", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)blocks;
	params[1] = (intptr_t)&r;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Ionic_Zip::Ionic::Zlib::InflateCodes::InflateFast(int32_t bl, int32_t bd, IL2CPP::Array<int32_t>* tl, int32_t tl_index, IL2CPP::Array<int32_t>* td, int32_t td_index, Ionic_Zip::Ionic::Zlib::InflateBlocks* s, Ionic_Zip::Ionic::Zlib::ZlibCodec* z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InflateFast", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32[]", "System.Int32", "System.Int32[]", "System.Int32", "Ionic.Zlib.InflateBlocks", "Ionic.Zlib.ZlibCodec" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&bl;
	params[1] = (intptr_t)&bd;
	params[2] = (intptr_t)tl;
	params[3] = (intptr_t)&tl_index;
	params[4] = (intptr_t)td;
	params[5] = (intptr_t)&td_index;
	params[6] = (intptr_t)s;
	params[7] = (intptr_t)z;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}

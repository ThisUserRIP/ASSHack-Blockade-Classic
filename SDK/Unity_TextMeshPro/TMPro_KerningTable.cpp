#include "TMPro_KerningTable.h"

IL2CPP::Il2CppClass* Unity_TextMeshPro::TMPro::KerningTable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.TextMeshPro.dll", "TMPro", "KerningTable");
	return il2cppclass;
}
mscorlib::System::Type* Unity_TextMeshPro::TMPro::KerningTable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_TextMeshPro::TMPro::KerningTable::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::KerningTable::AddKerningPair()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddKerningPair");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_TextMeshPro::TMPro::KerningTable::AddKerningPair(uint32_t first, uint32_t second, float offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddKerningPair", std::vector<std::string> { "System.UInt32", "System.UInt32", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&first;
	params[1] = (intptr_t)&second;
	params[2] = (intptr_t)&offset;
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
int32_t Unity_TextMeshPro::TMPro::KerningTable::AddGlyphPairAdjustmentRecord(uint32_t first, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy firstAdjustments, uint32_t second, Unity_TextMeshPro::TMPro::GlyphValueRecord_Legacy secondAdjustments)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddGlyphPairAdjustmentRecord", std::vector<std::string> { "System.UInt32", "TMPro.GlyphValueRecord_Legacy", "System.UInt32", "TMPro.GlyphValueRecord_Legacy" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&first;
	params[1] = (intptr_t)&firstAdjustments;
	params[2] = (intptr_t)&second;
	params[3] = (intptr_t)&secondAdjustments;
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
void Unity_TextMeshPro::TMPro::KerningTable::RemoveKerningPair(int32_t left, int32_t right)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveKerningPair", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&left;
	params[1] = (intptr_t)&right;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::KerningTable::RemoveKerningPair(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveKerningPair", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_TextMeshPro::TMPro::KerningTable::SortKerningPairs()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SortKerningPairs");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

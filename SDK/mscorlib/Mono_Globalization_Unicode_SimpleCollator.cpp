#include "Mono_Globalization_Unicode_SimpleCollator.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Globalization::Unicode::SimpleCollator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "Mono.Globalization.Unicode", "SimpleCollator");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Globalization::Unicode::SimpleCollator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Mono::Globalization::Unicode::SimpleCollator::_ctor(mscorlib::System::Globalization::CultureInfo* culture)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Globalization.CultureInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)culture;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Globalization::Unicode::SimpleCollator::SetCJKTable(mscorlib::System::Globalization::CultureInfo* culture, mscorlib::Mono::Globalization::Unicode::CodePointIndexer& cjkIndexer, uint8_t& catTable, uint8_t& lv1Table, mscorlib::Mono::Globalization::Unicode::CodePointIndexer& lv2Indexer, uint8_t& lv2Table)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCJKTable", std::vector<std::string> { "System.Globalization.CultureInfo", "Mono.Globalization.Unicode.CodePointIndexer&", "System.Byte*&", "System.Byte*&", "Mono.Globalization.Unicode.CodePointIndexer&", "System.Byte*&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)culture;
	params[1] = (intptr_t)&cjkIndexer;
	params[2] = (intptr_t)&catTable;
	params[3] = (intptr_t)&lv1Table;
	params[4] = (intptr_t)&lv2Indexer;
	params[5] = (intptr_t)&lv2Table;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Globalization::CultureInfo* mscorlib::Mono::Globalization::Unicode::SimpleCollator::GetNeutralCulture(mscorlib::System::Globalization::CultureInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNeutralCulture", std::vector<std::string> { "System.Globalization.CultureInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)info;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Globalization::CultureInfo*)returnValue;
}
uint8_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::Category(int32_t cp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Category", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
uint8_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::Level1(int32_t cp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Level1", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
uint8_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::Level2(int32_t cp, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Level2", std::vector<std::string> { "System.Int32", "Mono.Globalization.Unicode.SimpleCollator/ExtenderType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&cp;
	params[1] = (intptr_t)&ext;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::IsHalfKana(int32_t cp, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsHalfKana", std::vector<std::string> { "System.Int32", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&cp;
	params[1] = (intptr_t)&opt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::Mono::Globalization::Unicode::Contraction* mscorlib::Mono::Globalization::Unicode::SimpleCollator::GetContraction(mscorlib::System::String* s, int32_t start, int32_t end)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetContraction", std::vector<std::string> { "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Globalization::Unicode::Contraction*)returnValue;
}
mscorlib::Mono::Globalization::Unicode::Contraction* mscorlib::Mono::Globalization::Unicode::SimpleCollator::GetContraction(mscorlib::System::String* s, int32_t start, int32_t end, IL2CPP::Array<mscorlib::Mono::Globalization::Unicode::Contraction*>* clist)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetContraction", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "Mono.Globalization.Unicode.Contraction[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)clist;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Globalization::Unicode::Contraction*)returnValue;
}
mscorlib::Mono::Globalization::Unicode::Contraction* mscorlib::Mono::Globalization::Unicode::SimpleCollator::GetTailContraction(mscorlib::System::String* s, int32_t start, int32_t end)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTailContraction", std::vector<std::string> { "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Globalization::Unicode::Contraction*)returnValue;
}
mscorlib::Mono::Globalization::Unicode::Contraction* mscorlib::Mono::Globalization::Unicode::SimpleCollator::GetTailContraction(mscorlib::System::String* s, int32_t start, int32_t end, IL2CPP::Array<mscorlib::Mono::Globalization::Unicode::Contraction*>* clist)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTailContraction", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "Mono.Globalization.Unicode.Contraction[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)clist;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::Mono::Globalization::Unicode::Contraction*)returnValue;
}
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::FilterOptions(int32_t i, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FilterOptions", std::vector<std::string> { "System.Int32", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)&opt;
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
mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType mscorlib::Mono::Globalization::Unicode::SimpleCollator::GetExtenderType(int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtenderType", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ret;
		std::memset(&ret, 0, sizeof(mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType));
		return ret;
	}
	return static_cast<mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType>(*(mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType*)il2cpp_object_unbox(returnValue));
}
uint8_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::ToDashTypeValue(mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToDashTypeValue", std::vector<std::string> { "Mono.Globalization.Unicode.SimpleCollator/ExtenderType", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ext;
	params[1] = (intptr_t)&opt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::FilterExtender(int32_t i, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FilterExtender", std::vector<std::string> { "System.Int32", "Mono.Globalization.Unicode.SimpleCollator/ExtenderType", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)&ext;
	params[2] = (intptr_t)&opt;
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
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::IsIgnorable(int32_t i, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsIgnorable", std::vector<std::string> { "System.Int32", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)&opt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::IsSafe(int32_t i)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSafe", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&i;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Globalization::SortKey* mscorlib::Mono::Globalization::Unicode::SimpleCollator::GetSortKey(mscorlib::System::String* s, mscorlib::System::Globalization::CompareOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSortKey", std::vector<std::string> { "System.String", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Globalization::SortKey*)returnValue;
}
mscorlib::System::Globalization::SortKey* mscorlib::Mono::Globalization::Unicode::SimpleCollator::GetSortKey(mscorlib::System::String* s, int32_t start, int32_t length, mscorlib::System::Globalization::CompareOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSortKey", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	params[3] = (intptr_t)&options;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Globalization::SortKey*)returnValue;
}
void mscorlib::Mono::Globalization::Unicode::SimpleCollator::GetSortKey(mscorlib::System::String* s, int32_t start, int32_t end, mscorlib::Mono::Globalization::Unicode::SortKeyBuffer* buf, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSortKey", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "Mono.Globalization.Unicode.SortKeyBuffer", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)buf;
	params[4] = (intptr_t)&opt;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Globalization::Unicode::SimpleCollator::FillSortKeyRaw(int32_t i, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, mscorlib::Mono::Globalization::Unicode::SortKeyBuffer* buf, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillSortKeyRaw", std::vector<std::string> { "System.Int32", "Mono.Globalization.Unicode.SimpleCollator/ExtenderType", "Mono.Globalization.Unicode.SortKeyBuffer", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)&ext;
	params[2] = (intptr_t)buf;
	params[3] = (intptr_t)&opt;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Globalization::Unicode::SimpleCollator::FillSurrogateSortKeyRaw(int32_t i, mscorlib::Mono::Globalization::Unicode::SortKeyBuffer* buf)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillSurrogateSortKeyRaw", std::vector<std::string> { "System.Int32", "Mono.Globalization.Unicode.SortKeyBuffer" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)buf;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::Compare(mscorlib::System::String* s1, int32_t idx1, int32_t len1, mscorlib::System::String* s2, int32_t idx2, int32_t len2, mscorlib::System::Globalization::CompareOptions options)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)s1;
	params[1] = (intptr_t)&idx1;
	params[2] = (intptr_t)&len1;
	params[3] = (intptr_t)s2;
	params[4] = (intptr_t)&idx2;
	params[5] = (intptr_t)&len2;
	params[6] = (intptr_t)&options;
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
void mscorlib::Mono::Globalization::Unicode::SimpleCollator::ClearBuffer(uint8_t* buffer, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearBuffer", std::vector<std::string> { "System.Byte*", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::CompareInternal(mscorlib::System::String* s1, int32_t idx1, int32_t len1, mscorlib::System::String* s2, int32_t idx2, int32_t len2, bool& targetConsumed, bool& sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareInternal", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.String", "System.Int32", "System.Int32", "System.Boolean&", "System.Boolean&", "System.Boolean", "System.Boolean", "Mono.Globalization.Unicode.SimpleCollator/Context&" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)s1;
	params[1] = (intptr_t)&idx1;
	params[2] = (intptr_t)&len1;
	params[3] = (intptr_t)s2;
	params[4] = (intptr_t)&idx2;
	params[5] = (intptr_t)&len2;
	params[6] = (intptr_t)&targetConsumed;
	params[7] = (intptr_t)&sourceConsumed;
	params[8] = (intptr_t)&skipHeadingExtenders;
	params[9] = (intptr_t)&immediateBreakup;
	params[10] = (intptr_t)&ctx;
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
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::CompareFlagPair(bool b1, bool b2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompareFlagPair", std::vector<std::string> { "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&b1;
	params[1] = (intptr_t)&b2;
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
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::IsPrefix(mscorlib::System::String* src, mscorlib::System::String* target, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPrefix", std::vector<std::string> { "System.String", "System.String", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)src;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&opt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::IsPrefix(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPrefix", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	params[4] = (intptr_t)&opt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::IsPrefix(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, bool skipHeadingExtenders, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPrefix", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32", "System.Boolean", "Mono.Globalization.Unicode.SimpleCollator/Context&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	params[4] = (intptr_t)&skipHeadingExtenders;
	params[5] = (intptr_t)&ctx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::IsSuffix(mscorlib::System::String* src, mscorlib::System::String* target, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSuffix", std::vector<std::string> { "System.String", "System.String", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)src;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&opt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::IsSuffix(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSuffix", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	params[4] = (intptr_t)&opt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::QuickIndexOf(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, bool& testWasUnable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QuickIndexOf", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32", "System.Boolean&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	params[4] = (intptr_t)&testWasUnable;
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
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::IndexOf(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOf", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	params[4] = (intptr_t)&opt;
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
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOfOrdinal", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
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
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::IndexOfOrdinal(mscorlib::System::String* s, wchar_t target, int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOfOrdinal", std::vector<std::string> { "System.String", "System.Char", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&target;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
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
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::IndexOfSortKey(mscorlib::System::String* s, int32_t start, int32_t length, uint8_t* sortkey, wchar_t target, int32_t ti, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOfSortKey", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Byte*", "System.Char", "System.Int32", "System.Boolean", "Mono.Globalization.Unicode.SimpleCollator/Context&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	params[3] = (intptr_t)sortkey;
	params[4] = (intptr_t)&target;
	params[5] = (intptr_t)&ti;
	params[6] = (intptr_t)&noLv4;
	params[7] = (intptr_t)&ctx;
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
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::IndexOf(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, uint8_t* targetSortKey, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOf", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32", "System.Byte*", "Mono.Globalization.Unicode.SimpleCollator/Context&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	params[4] = (intptr_t)targetSortKey;
	params[5] = (intptr_t)&ctx;
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
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::LastIndexOf(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, mscorlib::System::Globalization::CompareOptions opt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LastIndexOf", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32", "System.Globalization.CompareOptions" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	params[4] = (intptr_t)&opt;
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
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::LastIndexOfOrdinal(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LastIndexOfOrdinal", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
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
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::LastIndexOfSortKey(mscorlib::System::String* s, int32_t start, int32_t orgStart, int32_t length, uint8_t* sortkey, int32_t ti, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LastIndexOfSortKey", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Int32", "System.Byte*", "System.Int32", "System.Boolean", "Mono.Globalization.Unicode.SimpleCollator/Context&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&orgStart;
	params[3] = (intptr_t)&length;
	params[4] = (intptr_t)sortkey;
	params[5] = (intptr_t)&ti;
	params[6] = (intptr_t)&noLv4;
	params[7] = (intptr_t)&ctx;
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
int32_t mscorlib::Mono::Globalization::Unicode::SimpleCollator::LastIndexOf(mscorlib::System::String* s, mscorlib::System::String* target, int32_t start, int32_t length, uint8_t* targetSortKey, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LastIndexOf", std::vector<std::string> { "System.String", "System.String", "System.Int32", "System.Int32", "System.Byte*", "Mono.Globalization.Unicode.SimpleCollator/Context&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)target;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	params[4] = (intptr_t)targetSortKey;
	params[5] = (intptr_t)&ctx;
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
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::MatchesForward(mscorlib::System::String* s, int32_t& idx, int32_t end, int32_t ti, uint8_t* sortkey, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchesForward", std::vector<std::string> { "System.String", "System.Int32&", "System.Int32", "System.Int32", "System.Byte*", "System.Boolean", "Mono.Globalization.Unicode.SimpleCollator/Context&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&idx;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&ti;
	params[4] = (intptr_t)sortkey;
	params[5] = (intptr_t)&noLv4;
	params[6] = (intptr_t)&ctx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::MatchesForwardCore(mscorlib::System::String* s, int32_t& idx, int32_t end, int32_t ti, uint8_t* sortkey, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, mscorlib::Mono::Globalization::Unicode::Contraction& ct, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchesForwardCore", std::vector<std::string> { "System.String", "System.Int32&", "System.Int32", "System.Int32", "System.Byte*", "System.Boolean", "Mono.Globalization.Unicode.SimpleCollator/ExtenderType", "Mono.Globalization.Unicode.Contraction&", "Mono.Globalization.Unicode.SimpleCollator/Context&" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&idx;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&ti;
	params[4] = (intptr_t)sortkey;
	params[5] = (intptr_t)&noLv4;
	params[6] = (intptr_t)&ext;
	params[7] = (intptr_t)&ct;
	params[8] = (intptr_t)&ctx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::MatchesPrimitive(mscorlib::System::Globalization::CompareOptions opt, uint8_t* source, int32_t si, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, uint8_t* target, int32_t ti, bool noLv4)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchesPrimitive", std::vector<std::string> { "System.Globalization.CompareOptions", "System.Byte*", "System.Int32", "Mono.Globalization.Unicode.SimpleCollator/ExtenderType", "System.Byte*", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&opt;
	params[1] = (intptr_t)source;
	params[2] = (intptr_t)&si;
	params[3] = (intptr_t)&ext;
	params[4] = (intptr_t)target;
	params[5] = (intptr_t)&ti;
	params[6] = (intptr_t)&noLv4;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::MatchesBackward(mscorlib::System::String* s, int32_t& idx, int32_t end, int32_t orgStart, int32_t ti, uint8_t* sortkey, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchesBackward", std::vector<std::string> { "System.String", "System.Int32&", "System.Int32", "System.Int32", "System.Int32", "System.Byte*", "System.Boolean", "Mono.Globalization.Unicode.SimpleCollator/Context&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&idx;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&orgStart;
	params[4] = (intptr_t)&ti;
	params[5] = (intptr_t)sortkey;
	params[6] = (intptr_t)&noLv4;
	params[7] = (intptr_t)&ctx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool mscorlib::Mono::Globalization::Unicode::SimpleCollator::MatchesBackwardCore(mscorlib::System::String* s, int32_t& idx, int32_t end, int32_t orgStart, int32_t ti, uint8_t* sortkey, bool noLv4, mscorlib::Mono::Globalization::Unicode::SimpleCollator_ExtenderType ext, mscorlib::Mono::Globalization::Unicode::Contraction& ct, mscorlib::Mono::Globalization::Unicode::SimpleCollator_Context& ctx)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MatchesBackwardCore", std::vector<std::string> { "System.String", "System.Int32&", "System.Int32", "System.Int32", "System.Int32", "System.Byte*", "System.Boolean", "Mono.Globalization.Unicode.SimpleCollator/ExtenderType", "Mono.Globalization.Unicode.Contraction&", "Mono.Globalization.Unicode.SimpleCollator/Context&" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&idx;
	params[2] = (intptr_t)&end;
	params[3] = (intptr_t)&orgStart;
	params[4] = (intptr_t)&ti;
	params[5] = (intptr_t)sortkey;
	params[6] = (intptr_t)&noLv4;
	params[7] = (intptr_t)&ext;
	params[8] = (intptr_t)&ct;
	params[9] = (intptr_t)&ctx;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void mscorlib::Mono::Globalization::Unicode::SimpleCollator::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

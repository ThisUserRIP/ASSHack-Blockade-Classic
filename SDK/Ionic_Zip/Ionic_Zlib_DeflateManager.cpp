#include "Ionic_Zlib_DeflateManager.h"

IL2CPP::Il2CppClass* Ionic_Zip::Ionic::Zlib::DeflateManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Ionic.Zip.dll", "Ionic.Zlib", "DeflateManager");
	return il2cppclass;
}
mscorlib::System::Type* Ionic_Zip::Ionic::Zlib::DeflateManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::_InitializeLazyMatch()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_InitializeLazyMatch");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::_InitializeTreeData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_InitializeTreeData");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::_InitializeBlocks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_InitializeBlocks");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::pqdownheap(IL2CPP::Array<int16_t>* tree, int32_t k)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pqdownheap", std::vector<std::string> { "System.Int16[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tree;
	params[1] = (intptr_t)&k;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Ionic_Zip::Ionic::Zlib::DeflateManager::_IsSmaller(IL2CPP::Array<int16_t>* tree, int32_t n, int32_t m, IL2CPP::Array<int8_t>* depth)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_IsSmaller", std::vector<std::string> { "System.Int16[]", "System.Int32", "System.Int32", "System.SByte[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)tree;
	params[1] = (intptr_t)&n;
	params[2] = (intptr_t)&m;
	params[3] = (intptr_t)depth;
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
void Ionic_Zip::Ionic::Zlib::DeflateManager::scan_tree(IL2CPP::Array<int16_t>* tree, int32_t max_code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "scan_tree", std::vector<std::string> { "System.Int16[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tree;
	params[1] = (intptr_t)&max_code;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Ionic_Zip::Ionic::Zlib::DeflateManager::build_bl_tree()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "build_bl_tree");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::send_all_trees(int32_t lcodes, int32_t dcodes, int32_t blcodes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "send_all_trees", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&lcodes;
	params[1] = (intptr_t)&dcodes;
	params[2] = (intptr_t)&blcodes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::send_tree(IL2CPP::Array<int16_t>* tree, int32_t max_code)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "send_tree", std::vector<std::string> { "System.Int16[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)tree;
	params[1] = (intptr_t)&max_code;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::put_bytes(IL2CPP::Array<uint8_t>* p, int32_t start, int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "put_bytes", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)p;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::send_code(int32_t c, IL2CPP::Array<int16_t>* tree)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "send_code", std::vector<std::string> { "System.Int32", "System.Int16[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&c;
	params[1] = (intptr_t)tree;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::send_bits(int32_t value, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "send_bits", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&value;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::_tr_align()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_tr_align");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Ionic_Zip::Ionic::Zlib::DeflateManager::_tr_tally(int32_t dist, int32_t lc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_tr_tally", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&dist;
	params[1] = (intptr_t)&lc;
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
void Ionic_Zip::Ionic::Zlib::DeflateManager::send_compressed_block(IL2CPP::Array<int16_t>* ltree, IL2CPP::Array<int16_t>* dtree)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "send_compressed_block", std::vector<std::string> { "System.Int16[]", "System.Int16[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)ltree;
	params[1] = (intptr_t)dtree;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::set_data_type()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_data_type");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::bi_flush()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bi_flush");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::bi_windup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bi_windup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::copy_block(int32_t buf, int32_t len, bool header)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "copy_block", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&buf;
	params[1] = (intptr_t)&len;
	params[2] = (intptr_t)&header;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::flush_block_only(bool eof)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "flush_block_only", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&eof;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Ionic_Zip::Ionic::Zlib::BlockState Ionic_Zip::Ionic::Zlib::DeflateManager::DeflateNone(Ionic_Zip::Ionic::Zlib::FlushType flush)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeflateNone", std::vector<std::string> { "Ionic.Zlib.FlushType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flush;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Ionic_Zip::Ionic::Zlib::BlockState ret;
		std::memset(&ret, 0, sizeof(Ionic_Zip::Ionic::Zlib::BlockState));
		return ret;
	}
	return static_cast<Ionic_Zip::Ionic::Zlib::BlockState>(*(Ionic_Zip::Ionic::Zlib::BlockState*)il2cpp_object_unbox(returnValue));
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::_tr_stored_block(int32_t buf, int32_t stored_len, bool eof)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_tr_stored_block", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&buf;
	params[1] = (intptr_t)&stored_len;
	params[2] = (intptr_t)&eof;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::_tr_flush_block(int32_t buf, int32_t stored_len, bool eof)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_tr_flush_block", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&buf;
	params[1] = (intptr_t)&stored_len;
	params[2] = (intptr_t)&eof;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::_fillWindow()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_fillWindow");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Ionic_Zip::Ionic::Zlib::BlockState Ionic_Zip::Ionic::Zlib::DeflateManager::DeflateFast(Ionic_Zip::Ionic::Zlib::FlushType flush)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeflateFast", std::vector<std::string> { "Ionic.Zlib.FlushType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flush;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Ionic_Zip::Ionic::Zlib::BlockState ret;
		std::memset(&ret, 0, sizeof(Ionic_Zip::Ionic::Zlib::BlockState));
		return ret;
	}
	return static_cast<Ionic_Zip::Ionic::Zlib::BlockState>(*(Ionic_Zip::Ionic::Zlib::BlockState*)il2cpp_object_unbox(returnValue));
}
Ionic_Zip::Ionic::Zlib::BlockState Ionic_Zip::Ionic::Zlib::DeflateManager::DeflateSlow(Ionic_Zip::Ionic::Zlib::FlushType flush)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeflateSlow", std::vector<std::string> { "Ionic.Zlib.FlushType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flush;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Ionic_Zip::Ionic::Zlib::BlockState ret;
		std::memset(&ret, 0, sizeof(Ionic_Zip::Ionic::Zlib::BlockState));
		return ret;
	}
	return static_cast<Ionic_Zip::Ionic::Zlib::BlockState>(*(Ionic_Zip::Ionic::Zlib::BlockState*)il2cpp_object_unbox(returnValue));
}
int32_t Ionic_Zip::Ionic::Zlib::DeflateManager::longest_match(int32_t cur_match)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "longest_match", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cur_match;
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
bool Ionic_Zip::Ionic::Zlib::DeflateManager::get_WantRfc1950HeaderBytes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_WantRfc1950HeaderBytes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::set_WantRfc1950HeaderBytes(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_WantRfc1950HeaderBytes", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Ionic_Zip::Ionic::Zlib::DeflateManager::Initialize(Ionic_Zip::Ionic::Zlib::ZlibCodec* codec, Ionic_Zip::Ionic::Zlib::CompressionLevel level, int32_t bits, Ionic_Zip::Ionic::Zlib::CompressionStrategy compressionStrategy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize", std::vector<std::string> { "Ionic.Zlib.ZlibCodec", "Ionic.Zlib.CompressionLevel", "System.Int32", "Ionic.Zlib.CompressionStrategy" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)codec;
	params[1] = (intptr_t)&level;
	params[2] = (intptr_t)&bits;
	params[3] = (intptr_t)&compressionStrategy;
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
int32_t Ionic_Zip::Ionic::Zlib::DeflateManager::Initialize(Ionic_Zip::Ionic::Zlib::ZlibCodec* codec, Ionic_Zip::Ionic::Zlib::CompressionLevel level, int32_t windowBits, int32_t memLevel, Ionic_Zip::Ionic::Zlib::CompressionStrategy strategy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize", std::vector<std::string> { "Ionic.Zlib.ZlibCodec", "Ionic.Zlib.CompressionLevel", "System.Int32", "System.Int32", "Ionic.Zlib.CompressionStrategy" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)codec;
	params[1] = (intptr_t)&level;
	params[2] = (intptr_t)&windowBits;
	params[3] = (intptr_t)&memLevel;
	params[4] = (intptr_t)&strategy;
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
void Ionic_Zip::Ionic::Zlib::DeflateManager::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Ionic_Zip::Ionic::Zlib::DeflateManager::SetDeflater()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDeflater");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Ionic_Zip::Ionic::Zlib::DeflateManager::Deflate(Ionic_Zip::Ionic::Zlib::FlushType flush)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Deflate", std::vector<std::string> { "Ionic.Zlib.FlushType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flush;
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
void Ionic_Zip::Ionic::Zlib::DeflateManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}

#include "Chunk.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Chunk::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "Chunk");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Chunk::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Chunk::_ctor(Assembly_CSharp::Vector3i position)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Vector3i" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&position;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::ChunkRenderer* Assembly_CSharp::Chunk::GetChunkRendererInstance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetChunkRendererInstance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::ChunkRenderer*)returnValue;
}
Assembly_CSharp::ChunkRenderer* Assembly_CSharp::Chunk::GetChunkRenderer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetChunkRenderer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::ChunkRenderer*)returnValue;
}
void Assembly_CSharp::Chunk::SetBlock(Assembly_CSharp::BlockData block, Assembly_CSharp::Vector3i pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBlock", std::vector<std::string> { "BlockData", "Vector3i" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&block;
	params[1] = (intptr_t)&pos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Chunk::SetBlock(Assembly_CSharp::BlockData block, int32_t x, int32_t y, int32_t z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetBlock", std::vector<std::string> { "BlockData", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&block;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&y;
	params[3] = (intptr_t)&z;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BlockData Assembly_CSharp::Chunk::GetBlock(Assembly_CSharp::Vector3i pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBlock", std::vector<std::string> { "Vector3i" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BlockData ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BlockData));
		return ret;
	}
	return static_cast<Assembly_CSharp::BlockData>(*(Assembly_CSharp::BlockData*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::BlockData Assembly_CSharp::Chunk::GetBlock(int32_t x, int32_t y, int32_t z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBlock", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::BlockData ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::BlockData));
		return ret;
	}
	return static_cast<Assembly_CSharp::BlockData>(*(Assembly_CSharp::BlockData*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Vector3i Assembly_CSharp::Chunk::GetPosition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPosition");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Vector3i ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector3i));
		return ret;
	}
	return static_cast<Assembly_CSharp::Vector3i>(*(Assembly_CSharp::Vector3i*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Chunk::FixCoords(Assembly_CSharp::Vector3i& chunk, Assembly_CSharp::Vector3i& local)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FixCoords", std::vector<std::string> { "Vector3i&", "Vector3i&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&chunk;
	params[1] = (intptr_t)&local;
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
bool Assembly_CSharp::Chunk::IsCorrectLocalPosition(Assembly_CSharp::Vector3i local)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsCorrectLocalPosition", std::vector<std::string> { "Vector3i" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&local;
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
bool Assembly_CSharp::Chunk::IsCorrectLocalPosition(int32_t x, int32_t y, int32_t z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsCorrectLocalPosition", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&z;
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
Assembly_CSharp::Vector3i Assembly_CSharp::Chunk::ToChunkPosition(Assembly_CSharp::Vector3i point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToChunkPosition", std::vector<std::string> { "Vector3i" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Vector3i ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector3i));
		return ret;
	}
	return static_cast<Assembly_CSharp::Vector3i>(*(Assembly_CSharp::Vector3i*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Vector3i Assembly_CSharp::Chunk::ToChunkPosition(int32_t pointX, int32_t pointY, int32_t pointZ)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToChunkPosition", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&pointX;
	params[1] = (intptr_t)&pointY;
	params[2] = (intptr_t)&pointZ;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Vector3i ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector3i));
		return ret;
	}
	return static_cast<Assembly_CSharp::Vector3i>(*(Assembly_CSharp::Vector3i*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Vector3i Assembly_CSharp::Chunk::ToLocalPosition(Assembly_CSharp::Vector3i point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToLocalPosition", std::vector<std::string> { "Vector3i" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Vector3i ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector3i));
		return ret;
	}
	return static_cast<Assembly_CSharp::Vector3i>(*(Assembly_CSharp::Vector3i*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Vector3i Assembly_CSharp::Chunk::ToLocalPosition(int32_t pointX, int32_t pointY, int32_t pointZ)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToLocalPosition", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&pointX;
	params[1] = (intptr_t)&pointY;
	params[2] = (intptr_t)&pointZ;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Vector3i ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector3i));
		return ret;
	}
	return static_cast<Assembly_CSharp::Vector3i>(*(Assembly_CSharp::Vector3i*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Vector3i Assembly_CSharp::Chunk::ToWorldPosition(Assembly_CSharp::Vector3i chunkPosition, Assembly_CSharp::Vector3i localPosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToWorldPosition", std::vector<std::string> { "Vector3i", "Vector3i" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&chunkPosition;
	params[1] = (intptr_t)&localPosition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Vector3i ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Vector3i));
		return ret;
	}
	return static_cast<Assembly_CSharp::Vector3i>(*(Assembly_CSharp::Vector3i*)il2cpp_object_unbox(returnValue));
}

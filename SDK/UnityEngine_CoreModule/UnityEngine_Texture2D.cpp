#include "UnityEngine_Texture2D.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Texture2D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "Texture2D");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Texture2D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::TextureFormat UnityEngine_CoreModule::UnityEngine::Texture2D::get_format()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_format");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::TextureFormat ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::TextureFormat));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::TextureFormat>(*(UnityEngine_CoreModule::UnityEngine::TextureFormat*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Texture2D* UnityEngine_CoreModule::UnityEngine::Texture2D::get_whiteTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_whiteTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Texture2D* UnityEngine_CoreModule::UnityEngine::Texture2D::get_blackTexture()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_blackTexture");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Texture2D*)returnValue;
}
bool UnityEngine_CoreModule::UnityEngine::Texture2D::Internal_CreateImpl(UnityEngine_CoreModule::UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CreateImpl", std::vector<std::string> { "UnityEngine.Texture2D", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags", "System.IntPtr" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)mono;
	params[1] = (intptr_t)&w;
	params[2] = (intptr_t)&h;
	params[3] = (intptr_t)&mipCount;
	params[4] = (intptr_t)&format;
	params[5] = (intptr_t)&flags;
	params[6] = (intptr_t)&nativeTex;
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
void UnityEngine_CoreModule::UnityEngine::Texture2D::Internal_Create(UnityEngine_CoreModule::UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Create", std::vector<std::string> { "UnityEngine.Texture2D", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags", "System.IntPtr" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)mono;
	params[1] = (intptr_t)&w;
	params[2] = (intptr_t)&h;
	params[3] = (intptr_t)&mipCount;
	params[4] = (intptr_t)&format;
	params[5] = (intptr_t)&flags;
	params[6] = (intptr_t)&nativeTex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Texture2D::get_isReadable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isReadable");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyImpl", std::vector<std::string> { "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&updateMipmaps;
	params[1] = (intptr_t)&makeNoLongerReadable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Texture2D::ResizeImpl(int32_t width, int32_t height)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResizeImpl", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
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
void UnityEngine_CoreModule::UnityEngine::Texture2D::SetPixelImpl(int32_t image, int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Color color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPixelImpl", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&image;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&y;
	params[3] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Color UnityEngine_CoreModule::UnityEngine::Texture2D::GetPixelImpl(int32_t image, int32_t x, int32_t y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPixelImpl", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&image;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Color UnityEngine_CoreModule::UnityEngine::Texture2D::GetPixelBilinearImpl(int32_t image, float u, float v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPixelBilinearImpl", std::vector<std::string> { "System.Int32", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&image;
	params[1] = (intptr_t)&u;
	params[2] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Texture2D::ResizeWithFormatImpl(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResizeWithFormatImpl", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&format;
	params[3] = (intptr_t)&hasMipMap;
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
void UnityEngine_CoreModule::UnityEngine::Texture2D::ReadPixelsImpl(UnityEngine_CoreModule::UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadPixelsImpl", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)&destX;
	params[2] = (intptr_t)&destY;
	params[3] = (intptr_t)&recalculateMipMaps;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::SetPixelsImpl(int32_t x, int32_t y, int32_t w, int32_t h, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* pixel, int32_t miplevel, int32_t frame)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPixelsImpl", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&w;
	params[3] = (intptr_t)&h;
	params[4] = (intptr_t)pixel;
	params[5] = (intptr_t)&miplevel;
	params[6] = (intptr_t)&frame;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* UnityEngine_CoreModule::UnityEngine::Texture2D::GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, int32_t miplevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPixels", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&blockWidth;
	params[3] = (intptr_t)&blockHeight;
	params[4] = (intptr_t)&miplevel;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>*)returnValue;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* UnityEngine_CoreModule::UnityEngine::Texture2D::GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPixels", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&blockWidth;
	params[3] = (intptr_t)&blockHeight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount, intptr_t nativeTex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags", "System.Int32", "System.IntPtr" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&format;
	params[3] = (intptr_t)&flags;
	params[4] = (intptr_t)&mipCount;
	params[5] = (intptr_t)&nativeTex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Experimental.Rendering.GraphicsFormat", "UnityEngine.Experimental.Rendering.TextureCreationFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&format;
	params[3] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, intptr_t nativeTex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Int32", "System.Boolean", "System.IntPtr" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&textureFormat;
	params[3] = (intptr_t)&mipCount;
	params[4] = (intptr_t)&linear;
	params[5] = (intptr_t)&nativeTex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&textureFormat;
	params[3] = (intptr_t)&mipChain;
	params[4] = (intptr_t)&linear;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::_ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&textureFormat;
	params[3] = (intptr_t)&mipChain;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::_ctor(int32_t width, int32_t height)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::SetPixel(int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Color color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPixel", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Color" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors, int32_t miplevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPixels", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	params[2] = (intptr_t)&blockWidth;
	params[3] = (intptr_t)&blockHeight;
	params[4] = (intptr_t)colors;
	params[5] = (intptr_t)&miplevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::SetPixels(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPixels", std::vector<std::string> { "UnityEngine.Color[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)colors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Color UnityEngine_CoreModule::UnityEngine::Texture2D::GetPixel(int32_t x, int32_t y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPixel", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&x;
	params[1] = (intptr_t)&y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Color UnityEngine_CoreModule::UnityEngine::Texture2D::GetPixelBilinear(float u, float v)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPixelBilinear", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&u;
	params[1] = (intptr_t)&v;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Color ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Color));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Color>(*(UnityEngine_CoreModule::UnityEngine::Color*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::Apply(bool updateMipmaps, bool makeNoLongerReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&updateMipmaps;
	params[1] = (intptr_t)&makeNoLongerReadable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::Apply(bool updateMipmaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&updateMipmaps;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::Apply()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Apply");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Texture2D::Resize(int32_t width, int32_t height)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Resize", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
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
bool UnityEngine_CoreModule::UnityEngine::Texture2D::Resize(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::TextureFormat format, bool hasMipMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Resize", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.TextureFormat", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&width;
	params[1] = (intptr_t)&height;
	params[2] = (intptr_t)&format;
	params[3] = (intptr_t)&hasMipMap;
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
void UnityEngine_CoreModule::UnityEngine::Texture2D::ReadPixels(UnityEngine_CoreModule::UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadPixels", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)&destX;
	params[2] = (intptr_t)&destY;
	params[3] = (intptr_t)&recalculateMipMaps;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::ReadPixels(UnityEngine_CoreModule::UnityEngine::Rect source, int32_t destX, int32_t destY)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadPixels", std::vector<std::string> { "UnityEngine.Rect", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)&destX;
	params[2] = (intptr_t)&destY;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* UnityEngine_CoreModule::UnityEngine::Texture2D::GetPixels(int32_t miplevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPixels", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&miplevel;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>*)returnValue;
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* UnityEngine_CoreModule::UnityEngine::Texture2D::GetPixels()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPixels");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::SetPixelImpl_Injected(int32_t image, int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Color& color)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPixelImpl_Injected", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&image;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&y;
	params[3] = (intptr_t)&color;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::GetPixelImpl_Injected(int32_t image, int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Color& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPixelImpl_Injected", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&image;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&y;
	params[3] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::GetPixelBilinearImpl_Injected(int32_t image, float u, float v, UnityEngine_CoreModule::UnityEngine::Color& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPixelBilinearImpl_Injected", std::vector<std::string> { "System.Int32", "System.Single", "System.Single", "UnityEngine.Color&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&image;
	params[1] = (intptr_t)&u;
	params[2] = (intptr_t)&v;
	params[3] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Texture2D::ReadPixelsImpl_Injected(UnityEngine_CoreModule::UnityEngine::Rect& source, int32_t destX, int32_t destY, bool recalculateMipMaps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadPixelsImpl_Injected", std::vector<std::string> { "UnityEngine.Rect&", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)&destX;
	params[2] = (intptr_t)&destY;
	params[3] = (intptr_t)&recalculateMipMaps;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}

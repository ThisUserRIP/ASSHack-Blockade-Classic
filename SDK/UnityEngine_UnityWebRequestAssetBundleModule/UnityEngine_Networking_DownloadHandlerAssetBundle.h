#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_UnityWebRequestModule\UnityEngine_Networking_DownloadHandler.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Hash128.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Hash128; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_CachedAssetBundle.h"
namespace UnityEngine_CoreModule::UnityEngine { struct CachedAssetBundle; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace UnityEngine_AssetBundleModule::UnityEngine { struct AssetBundle; };

namespace UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking
{
	struct DownloadHandlerAssetBundle : UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static intptr_t CreateCached(UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, mscorlib::System::String* url, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Hash128 hash, uint32_t crc);
		void InternalCreateAssetBundleCached(mscorlib::System::String* url, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Hash128 hash, uint32_t crc);
		void _ctor(mscorlib::System::String* url, UnityEngine_CoreModule::UnityEngine::CachedAssetBundle cachedBundle, uint32_t crc);
		IL2CPP::Array<uint8_t>* GetData();
		mscorlib::System::String* GetText();
		UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* get_assetBundle();
		static intptr_t CreateCached_Injected(UnityEngine_UnityWebRequestAssetBundleModule::UnityEngine::Networking::DownloadHandlerAssetBundle* obj, mscorlib::System::String* url, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Hash128& hash, uint32_t crc);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_CustomYieldInstruction.h"
#include "..\UnityEngine_CoreModule\UnityEngine_ThreadPriority.h"
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UnityWebRequest; };
namespace UnityEngine_AssetBundleModule::UnityEngine { struct AssetBundle; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Hash128.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Hash128; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine { struct WWWForm; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_UnityWebRequestWWWModule::UnityEngine
{
	struct WWW : UnityEngine_CoreModule::UnityEngine::CustomYieldInstruction
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::ThreadPriority _threadPriority_k__BackingField;
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* _uwr;
		UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* _assetBundle;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* _responseHeaders;
		static UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW* LoadFromCacheOrDownload(mscorlib::System::String* url, UnityEngine_CoreModule::UnityEngine::Hash128 hash);
		static UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW* LoadFromCacheOrDownload(mscorlib::System::String* url, UnityEngine_CoreModule::UnityEngine::Hash128 hash, uint32_t crc);
		void _ctor(mscorlib::System::String* url);
		void _ctor(mscorlib::System::String* url, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* form);
		void _ctor(mscorlib::System::String* url, IL2CPP::Array<uint8_t>* postData, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* headers);
		void _ctor(mscorlib::System::String* url, mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Hash128 hash, uint32_t crc);
		UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* get_assetBundle();
		IL2CPP::Array<uint8_t>* get_bytes();
		int32_t get_size();
		int32_t get_bytesDownloaded();
		mscorlib::System::String* get_error();
		float get_progress();
		mscorlib::System::String* get_text();
		UnityEngine_CoreModule::UnityEngine::Texture2D* CreateTextureFromDownloadedData(bool markNonReadable);
		UnityEngine_CoreModule::UnityEngine::Texture2D* get_texture();
		mscorlib::System::String* get_url();
		bool get_keepWaiting();
		void Dispose();
		bool WaitUntilDoneIfPossible();
	};
}


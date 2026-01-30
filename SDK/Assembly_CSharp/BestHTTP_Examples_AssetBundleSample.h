#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_AssetBundleModule::UnityEngine { struct AssetBundle; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct AssetBundleSample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* URI;
		mscorlib::System::String* status;
		UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* cachedBundle;
		UnityEngine_CoreModule::UnityEngine::Texture2D* texture;
		bool downloading;
		void OnGUI();
		void OnDestroy();
		mscorlib::System::Collections::IEnumerator* DownloadAssetBundle();
		mscorlib::System::Collections::IEnumerator* ProcessAssetBundle(UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* bundle);
		void UnloadBundle();
		void _ctor();
		void _OnGUI_b__5_0();
	};
}


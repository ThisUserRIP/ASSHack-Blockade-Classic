#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UnityWebRequestWWWModule::UnityEngine { struct WWW; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
namespace UnityEngine_CoreModule::UnityEngine { struct TextAsset; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimationClip; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace Assembly_CSharp { struct BlockSet; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace UnityEngine_AssetBundleModule::UnityEngine { struct AssetBundleManifest; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_AssetBundleModule::UnityEngine { struct AssetBundle; };

namespace Assembly_CSharp
{
	struct ContentLoader : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AssetBundleModule::UnityEngine::AssetBundleManifest* ABM;
		bool get_manifest;
		int32_t total_progress;
		int32_t current_progress;
		int32_t download_length;
		struct StaticFields
		{
			UnityEngine_UnityWebRequestWWWModule::UnityEngine::WWW* www;
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* bundles_list;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Texture2D>* TextureList;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, UnityEngine_AudioModule::UnityEngine::AudioClip>* SoundList;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Sprite>* SpriteList;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::TextAsset>* TextAssetList;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::GameObject>* GameObjectList;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, UnityEngine_AnimationModule::UnityEngine::AnimationClip>* AnimationList;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Material>* MaterialList;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::BlockSet>* BlockSetList;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, UnityEngine_TextRenderingModule::UnityEngine::Font>* FontList;
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::Byte>* tmp;
			bool downloading;
			mscorlib::System::String* currentBundle;
			int32_t bundles_count;
			float progress;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Update();
		mscorlib::System::Collections::IEnumerator* GetAssetBundlesManifest();
		mscorlib::System::Collections::IEnumerator* DownloadAssetBundle(int32_t index);
		void ProcessAssetBundle(UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* bundle);
		static UnityEngine_CoreModule::UnityEngine::GameObject* LoadGameObject(mscorlib::System::String* _name);
		static Assembly_CSharp::BlockSet* LoadBlockSet(mscorlib::System::String* _name);
		static UnityEngine_AudioModule::UnityEngine::AudioClip* LoadSound(mscorlib::System::String* _name);
		static UnityEngine_TextRenderingModule::UnityEngine::Font* LoadFont(mscorlib::System::String* _name);
		static UnityEngine_AnimationModule::UnityEngine::AnimationClip* LoadAnimation(mscorlib::System::String* _name);
		static UnityEngine_CoreModule::UnityEngine::Texture2D* LoadTexture(mscorlib::System::String* _name);
		static UnityEngine_CoreModule::UnityEngine::Sprite* LoadSprite(mscorlib::System::String* _name);
		static UnityEngine_CoreModule::UnityEngine::TextAsset* LoadTextAsset(mscorlib::System::String* _name);
		static UnityEngine_CoreModule::UnityEngine::Material* LoadMaterial(mscorlib::System::String* _name);
		void OnGUI();
		static mscorlib::System::String* GetResName(mscorlib::System::String* name);
		void _ctor();
		static void _cctor();
	};
}


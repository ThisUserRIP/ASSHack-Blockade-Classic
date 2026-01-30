#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
namespace UnityEngine_CoreModule::UnityEngine { struct MeshFilter; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace Unity_TextMeshPro::TMPro { struct TextMeshPro; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
#include "TMPro_MaterialReference.h"
namespace Unity_TextMeshPro::TMPro { struct MaterialReference; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_SubMesh : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_FontAsset* m_fontAsset;
		Unity_TextMeshPro::TMPro::TMP_SpriteAsset* m_spriteAsset;
		UnityEngine_CoreModule::UnityEngine::Material* m_material;
		UnityEngine_CoreModule::UnityEngine::Material* m_sharedMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_fallbackMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* m_fallbackSourceMaterial;
		bool m_isDefaultMaterial;
		float m_padding;
		UnityEngine_CoreModule::UnityEngine::Renderer* m_renderer;
		UnityEngine_CoreModule::UnityEngine::MeshFilter* m_meshFilter;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_mesh;
		Unity_TextMeshPro::TMPro::TextMeshPro* m_TextComponent;
		bool m_isRegisteredForEvents;
		Unity_TextMeshPro::TMPro::TMP_FontAsset* get_fontAsset();
		void set_fontAsset(Unity_TextMeshPro::TMPro::TMP_FontAsset* value);
		Unity_TextMeshPro::TMPro::TMP_SpriteAsset* get_spriteAsset();
		void set_spriteAsset(Unity_TextMeshPro::TMPro::TMP_SpriteAsset* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_material();
		void set_material(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_sharedMaterial();
		void set_sharedMaterial(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_fallbackMaterial();
		void set_fallbackMaterial(UnityEngine_CoreModule::UnityEngine::Material* value);
		UnityEngine_CoreModule::UnityEngine::Material* get_fallbackSourceMaterial();
		void set_fallbackSourceMaterial(UnityEngine_CoreModule::UnityEngine::Material* value);
		bool get_isDefaultMaterial();
		void set_isDefaultMaterial(bool value);
		float get_padding();
		void set_padding(float value);
		UnityEngine_CoreModule::UnityEngine::Renderer* get_renderer();
		UnityEngine_CoreModule::UnityEngine::MeshFilter* get_meshFilter();
		UnityEngine_CoreModule::UnityEngine::Mesh* get_mesh();
		void set_mesh(UnityEngine_CoreModule::UnityEngine::Mesh* value);
		Unity_TextMeshPro::TMPro::TMP_Text* get_textComponent();
		static Unity_TextMeshPro::TMPro::TMP_SubMesh* AddSubTextObject(Unity_TextMeshPro::TMPro::TextMeshPro* textComponent, Unity_TextMeshPro::TMPro::MaterialReference materialReference);
		void OnEnable();
		void OnDisable();
		void OnDestroy();
		void DestroySelf();
		UnityEngine_CoreModule::UnityEngine::Material* GetMaterial(UnityEngine_CoreModule::UnityEngine::Material* mat);
		UnityEngine_CoreModule::UnityEngine::Material* CreateMaterialInstance(UnityEngine_CoreModule::UnityEngine::Material* source);
		UnityEngine_CoreModule::UnityEngine::Material* GetSharedMaterial();
		void SetSharedMaterial(UnityEngine_CoreModule::UnityEngine::Material* mat);
		float GetPaddingForMaterial();
		void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);
		void SetVerticesDirty();
		void SetMaterialDirty();
		void UpdateMaterial();
		void _ctor();
	};
}


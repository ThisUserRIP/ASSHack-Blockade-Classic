#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "Doozy_Engine_Themes_ColorId.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ColorId; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "Doozy_Engine_Themes_SpriteId.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct SpriteId; };
#include "Doozy_Engine_Themes_TextureId.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct TextureId; };
#include "Doozy_Engine_Themes_FontId.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct FontId; };
#include "Doozy_Engine_Themes_FontAssetId.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct FontAssetId; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Doozy_Engine_Themes_LabelId.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct LabelId; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemeVariantData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_variantName;
		IL2CPP::Array<uint8_t>* SerializedGuid;
		mscorlib::System::Guid m_id;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::ColorId>* Colors;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::SpriteId>* Sprites;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::TextureId>* Textures;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::FontId>* Fonts;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::FontAssetId>* FontAssets;
		struct StaticFields
		{
			mscorlib::System::String* DEFAULT_THEME_VARIANT_NAME;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Color get_DefaultColor();
		static UnityEngine_CoreModule::UnityEngine::Sprite* get_DefaultSprite();
		static UnityEngine_CoreModule::UnityEngine::Texture* get_DefaultTexture();
		static UnityEngine_TextRenderingModule::UnityEngine::Font* get_DefaultFont();
		mscorlib::System::Guid get_Id();
		mscorlib::System::String* get_VariantName();
		void set_VariantName(mscorlib::System::String* value);
		void _ctor();
		void _ctor(mscorlib::System::String* variantName);
		void _ctor(mscorlib::System::String* variantName, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* colorLabels, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* spriteLabels, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* textureLabels, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* fontLabels, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* fontAssetLabels);
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void AddColorProperty(mscorlib::System::Guid guid);
		void AddColorProperty(mscorlib::System::Guid guid, UnityEngine_CoreModule::UnityEngine::Color color);
		bool ContainsColor(mscorlib::System::Guid propertyId);
		UnityEngine_CoreModule::UnityEngine::Color GetColor(mscorlib::System::Guid propertyId);
		void AddSpriteProperty(mscorlib::System::Guid guid);
		void AddSpriteProperty(mscorlib::System::Guid guid, UnityEngine_CoreModule::UnityEngine::Sprite* sprite);
		bool ContainsSprite(mscorlib::System::Guid propertyId);
		UnityEngine_CoreModule::UnityEngine::Sprite* GetSprite(mscorlib::System::Guid propertyId);
		void AddTextureProperty(mscorlib::System::Guid guid);
		void AddTextureProperty(mscorlib::System::Guid guid, UnityEngine_CoreModule::UnityEngine::Texture* texture);
		bool ContainsTexture(mscorlib::System::Guid propertyId);
		UnityEngine_CoreModule::UnityEngine::Texture* GetTexture(mscorlib::System::Guid propertyId);
		void AddFontProperty(mscorlib::System::Guid guid);
		void AddFontProperty(mscorlib::System::Guid guid, UnityEngine_TextRenderingModule::UnityEngine::Font* font);
		bool ContainsFont(mscorlib::System::Guid propertyId);
		UnityEngine_TextRenderingModule::UnityEngine::Font* GetFont(mscorlib::System::Guid propertyId);
		void SyncColorIdsToLabelIds(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* colorLabels);
		void SyncSpriteIdsToLabelIds(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* spriteLabels);
		void SyncTextureIdsToLabelIds(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* textureLabels);
		void SyncFontIdsToLabelIds(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* fontLabels);
		void SyncFontAssetIdsToLabelIds(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Themes::LabelId>* fontAssetLabels);
	};
}


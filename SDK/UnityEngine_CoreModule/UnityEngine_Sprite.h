#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "UnityEngine_SpriteMeshType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
#include "UnityEngine_SpritePackingMode.h"
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Sprite : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		int32_t GetPackingMode();
		int32_t GetPacked();
		UnityEngine_CoreModule::UnityEngine::Rect GetTextureRect();
		UnityEngine_CoreModule::UnityEngine::Vector4 GetInnerUVs();
		UnityEngine_CoreModule::UnityEngine::Vector4 GetOuterUVs();
		UnityEngine_CoreModule::UnityEngine::Vector4 GetPadding();
		static UnityEngine_CoreModule::UnityEngine::Sprite* CreateSprite(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine_CoreModule::UnityEngine::SpriteMeshType meshType, UnityEngine_CoreModule::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);
		UnityEngine_CoreModule::UnityEngine::Bounds get_bounds();
		UnityEngine_CoreModule::UnityEngine::Rect get_rect();
		UnityEngine_CoreModule::UnityEngine::Vector4 get_border();
		UnityEngine_CoreModule::UnityEngine::Texture2D* get_texture();
		float get_pixelsPerUnit();
		UnityEngine_CoreModule::UnityEngine::Texture2D* get_associatedAlphaSplitTexture();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_pivot();
		bool get_packed();
		UnityEngine_CoreModule::UnityEngine::SpritePackingMode get_packingMode();
		UnityEngine_CoreModule::UnityEngine::Rect get_textureRect();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* get_vertices();
		IL2CPP::Array<uint16_t>* get_triangles();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* get_uv();
		static UnityEngine_CoreModule::UnityEngine::Sprite* Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine_CoreModule::UnityEngine::SpriteMeshType meshType, UnityEngine_CoreModule::UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);
		static UnityEngine_CoreModule::UnityEngine::Sprite* Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine_CoreModule::UnityEngine::SpriteMeshType meshType, UnityEngine_CoreModule::UnityEngine::Vector4 border);
		static UnityEngine_CoreModule::UnityEngine::Sprite* Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine_CoreModule::UnityEngine::SpriteMeshType meshType);
		static UnityEngine_CoreModule::UnityEngine::Sprite* Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit, uint32_t extrude);
		static UnityEngine_CoreModule::UnityEngine::Sprite* Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot, float pixelsPerUnit);
		static UnityEngine_CoreModule::UnityEngine::Sprite* Create(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_CoreModule::UnityEngine::Vector2 pivot);
		void GetTextureRect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret);
		void GetInnerUVs_Injected(UnityEngine_CoreModule::UnityEngine::Vector4& ret);
		void GetOuterUVs_Injected(UnityEngine_CoreModule::UnityEngine::Vector4& ret);
		void GetPadding_Injected(UnityEngine_CoreModule::UnityEngine::Vector4& ret);
		static UnityEngine_CoreModule::UnityEngine::Sprite* CreateSprite_Injected(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, UnityEngine_CoreModule::UnityEngine::Rect& rect, UnityEngine_CoreModule::UnityEngine::Vector2& pivot, float pixelsPerUnit, uint32_t extrude, UnityEngine_CoreModule::UnityEngine::SpriteMeshType meshType, UnityEngine_CoreModule::UnityEngine::Vector4& border, bool generateFallbackPhysicsShape);
		void get_bounds_Injected(UnityEngine_CoreModule::UnityEngine::Bounds& ret);
		void get_rect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret);
		void get_border_Injected(UnityEngine_CoreModule::UnityEngine::Vector4& ret);
		void get_pivot_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct Atlas; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp { struct BlockSet; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
namespace Assembly_CSharp { struct MeshBuilder; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp
{
	struct Block : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		int32_t atlas;
		int32_t light;
		Assembly_CSharp::Atlas* _atlas;
		bool alpha;
		void Init(Assembly_CSharp::BlockSet* blockSet);
		UnityEngine_CoreModule::UnityEngine::Rect ToRect(int32_t pos);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* ToTexCoords(int32_t pos);
		bool DrawPreview(UnityEngine_CoreModule::UnityEngine::Rect position);
		UnityEngine_CoreModule::UnityEngine::Rect GetPreviewFace();
		UnityEngine_CoreModule::UnityEngine::Rect GetTopFace();
		void Build(Assembly_CSharp::Vector3i localPos, Assembly_CSharp::Vector3i worldPos, Assembly_CSharp::MeshBuilder* mesh, bool onlyLight);
		Assembly_CSharp::MeshBuilder* Build();
		void SetName(mscorlib::System::String* name);
		mscorlib::System::String* GetName();
		void SetAtlasID(int32_t atlas);
		int32_t GetAtlasID();
		Assembly_CSharp::Atlas* GetAtlas();
		UnityEngine_CoreModule::UnityEngine::Texture* GetTexture();
		void SetLight(int32_t light);
		uint8_t GetLight();
		bool IsSolid();
		bool IsAlpha();
		void _ctor();
	};
}


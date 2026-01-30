#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Block.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp { struct BlockSet; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "CubeFace.h"
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
namespace Assembly_CSharp { struct MeshBuilder; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct CactusBlock : Assembly_CSharp::Block
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t side;
		int32_t top;
		int32_t bottom;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* _side;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* _top;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* _bottom;
		void Init(Assembly_CSharp::BlockSet* blockSet);
		UnityEngine_CoreModule::UnityEngine::Rect GetPreviewFace();
		UnityEngine_CoreModule::UnityEngine::Rect GetTopFace();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* GetFaceUV(Assembly_CSharp::CubeFace face);
		void Build(Assembly_CSharp::Vector3i localPos, Assembly_CSharp::Vector3i worldPos, Assembly_CSharp::MeshBuilder* mesh, bool onlyLight);
		Assembly_CSharp::MeshBuilder* Build();
		bool IsSolid();
		void _ctor();
	};
}


#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct LightUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool CheckForChange(int32_t a, int32_t& b);
		static bool CheckForChange(float a, float& b);
		static bool CheckForChange(bool a, bool& b);
		static UnityEngine_CoreModule::UnityEngine::Bounds GenerateParametricMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, float radius, float falloffDistance, float angle, int32_t sides);
		static UnityEngine_CoreModule::UnityEngine::Bounds GenerateSpriteMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, UnityEngine_CoreModule::UnityEngine::Sprite* sprite);
		static mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* GetFalloffShape(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* shapePath);
		static UnityEngine_CoreModule::UnityEngine::Bounds GenerateShapeMesh(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* shapePath, float falloffDistance);
	};
}


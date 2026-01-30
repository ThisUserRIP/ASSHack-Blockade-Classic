#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Reflection { struct Assembly; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening::Core
{
	struct Utils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Reflection::Assembly*>* _loadedAssemblies;
			IL2CPP::Array<mscorlib::System::String*>* _defAssembliesToQuery;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Vector3 Vector3FromAngle(float degrees, float magnitude);
		static float Angle2D(UnityEngine_CoreModule::UnityEngine::Vector3 from, UnityEngine_CoreModule::UnityEngine::Vector3 to);
		static UnityEngine_CoreModule::UnityEngine::Vector3 RotateAroundPivot(UnityEngine_CoreModule::UnityEngine::Vector3 point, UnityEngine_CoreModule::UnityEngine::Vector3 pivot, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		static bool Vector3AreApproximatelyEqual(UnityEngine_CoreModule::UnityEngine::Vector3 a, UnityEngine_CoreModule::UnityEngine::Vector3 b);
		static mscorlib::System::Type* GetLooseScriptType(mscorlib::System::String* typeName);
		static void _cctor();
	};
}


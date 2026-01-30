#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct LightComputer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint8_t MIN_LIGHT;
			uint8_t MAX_LIGHT;
			uint8_t STEP_LIGHT;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Vector3i>* list;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void RecomputeLightAtPosition(Assembly_CSharp::Vector3i pos);
		static void Scatter(Assembly_CSharp::Vector3i pos);
		static void Scatter(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Vector3i>* list);
		static void RemoveLight(Assembly_CSharp::Vector3i pos);
		static void RemoveLight(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Vector3i>* list);
		void _ctor();
		static void _cctor();
	};
}


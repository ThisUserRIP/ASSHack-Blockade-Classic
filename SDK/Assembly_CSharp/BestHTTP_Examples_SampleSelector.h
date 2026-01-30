#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::Examples { struct SampleDescriptor; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct SampleSelector : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Examples::SampleDescriptor>* Samples;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPos;
		struct StaticFields
		{
			int32_t statisticsHeight;
			Assembly_CSharp::BestHTTP::Examples::SampleDescriptor* SelectedSample;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void Update();
		void OnGUI();
		void DrawSample(Assembly_CSharp::BestHTTP::Examples::SampleDescriptor* sample);
		void DrawSampleDetails(Assembly_CSharp::BestHTTP::Examples::SampleDescriptor* sample);
		void _ctor();
	};
}


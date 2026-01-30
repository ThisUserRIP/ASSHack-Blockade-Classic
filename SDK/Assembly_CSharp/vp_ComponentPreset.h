#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "vp_ComponentPreset_ReadMode.h"
namespace Assembly_CSharp { struct vp_ComponentPreset_Field; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Component; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct TextAsset; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp
{
	struct vp_ComponentPreset : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* m_ComponentType;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::vp_ComponentPreset_Field>* m_Fields;
		struct StaticFields
		{
			mscorlib::System::String* m_FullPath;
			int32_t m_LineNumber;
			mscorlib::System::Type* m_Type;
			bool LogErrors;
			Assembly_CSharp::vp_ComponentPreset_ReadMode m_ReadMode;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::Type* get_ComponentType();
		static mscorlib::System::String* Save(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::String* fullPath);
		static mscorlib::System::String* Save(Assembly_CSharp::vp_ComponentPreset* savePreset, mscorlib::System::String* fullPath, bool isDifference);
		static mscorlib::System::String* SaveDifference(Assembly_CSharp::vp_ComponentPreset* initialStatePreset, UnityEngine_CoreModule::UnityEngine::Component* modifiedComponent, mscorlib::System::String* fullPath, Assembly_CSharp::vp_ComponentPreset* diskPreset);
		void InitFromComponent(UnityEngine_CoreModule::UnityEngine::Component* component);
		static Assembly_CSharp::vp_ComponentPreset* CreateFromComponent(UnityEngine_CoreModule::UnityEngine::Component* component);
		bool LoadTextStream(mscorlib::System::String* fullPath);
		static bool Load(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::String* fullPath);
		bool LoadFromResources(mscorlib::System::String* resourcePath);
		static Assembly_CSharp::vp_ComponentPreset* LoadFromResources(UnityEngine_CoreModule::UnityEngine::Component* component, mscorlib::System::String* resourcePath);
		bool LoadFromTextAsset(UnityEngine_CoreModule::UnityEngine::TextAsset* file);
		static Assembly_CSharp::vp_ComponentPreset* LoadFromTextAsset(UnityEngine_CoreModule::UnityEngine::Component* component, UnityEngine_CoreModule::UnityEngine::TextAsset* file);
		static void Append(mscorlib::System::String* str);
		static void ClearTextFile();
		void ParseLines(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* lines);
		bool Parse(mscorlib::System::String* line);
		static bool Apply(UnityEngine_CoreModule::UnityEngine::Component* component, Assembly_CSharp::vp_ComponentPreset* preset);
		static mscorlib::System::Type* GetFileType(mscorlib::System::String* fullPath);
		static mscorlib::System::Type* GetFileTypeFromAsset(UnityEngine_CoreModule::UnityEngine::TextAsset* asset);
		static mscorlib::System::Object* TokensToObject(mscorlib::System::Reflection::FieldInfo* field, IL2CPP::Array<mscorlib::System::String*>* tokens);
		static mscorlib::System::String* RemoveComments(mscorlib::System::String* str);
		static UnityEngine_CoreModule::UnityEngine::Vector4 ArgsToVector4(IL2CPP::Array<mscorlib::System::String*>* args);
		static UnityEngine_CoreModule::UnityEngine::Vector3 ArgsToVector3(IL2CPP::Array<mscorlib::System::String*>* args);
		static UnityEngine_CoreModule::UnityEngine::Vector2 ArgsToVector2(IL2CPP::Array<mscorlib::System::String*>* args);
		static float ArgsToFloat(IL2CPP::Array<mscorlib::System::String*>* args);
		static int32_t ArgsToInt(IL2CPP::Array<mscorlib::System::String*>* args);
		static bool ArgsToBool(IL2CPP::Array<mscorlib::System::String*>* args);
		static mscorlib::System::String* ArgsToString(IL2CPP::Array<mscorlib::System::String*>* args);
		mscorlib::System::Type* GetFieldType(mscorlib::System::String* fieldName);
		mscorlib::System::Object* GetFieldValue(mscorlib::System::String* fieldName);
		static mscorlib::System::String* ExtractFilenameFromPath(mscorlib::System::String* path);
		static void PresetError(mscorlib::System::String* message);
		static void Error(mscorlib::System::String* message);
		void _ctor();
		static void _cctor();
	};
}


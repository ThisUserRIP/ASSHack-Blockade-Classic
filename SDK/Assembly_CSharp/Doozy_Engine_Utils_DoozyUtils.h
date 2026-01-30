#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp::Doozy::Engine::Utils
{
	struct DoozyUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* BACKGROUND;
			mscorlib::System::String* OVERLAY;
			UnityEngine_CoreModule::UnityEngine::Color BackgroundColor;
			UnityEngine_CoreModule::UnityEngine::Color CheckmarkColor;
			UnityEngine_CoreModule::UnityEngine::Color OverlayColor;
			UnityEngine_CoreModule::UnityEngine::Color TextColor;
			int32_t TEXT_FONT_SIZE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_UI::UnityEngine::UI::Image* AddImageToGameObject(UnityEngine_CoreModule::UnityEngine::GameObject* target);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateGameObjectWithAnImageComponent(mscorlib::System::String* objectName, UnityEngine_CoreModule::UnityEngine::Color color, UnityEngine_CoreModule::UnityEngine::GameObject* parent);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateBackgroundImage(UnityEngine_CoreModule::UnityEngine::GameObject* parent);
		static UnityEngine_CoreModule::UnityEngine::GameObject* CreateOverlayImage(UnityEngine_CoreModule::UnityEngine::GameObject* parent);
		template <typename T> static T* AddToScene(mscorlib::System::String* gameObjectName, bool isSingleton, bool selectGameObjectAfterCreation)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddToScene", std::vector<std::string> { "System.String", "System.Boolean", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)gameObjectName;
			params[1] = (intptr_t)&isSingleton;
			params[2] = (intptr_t)&selectGameObjectAfterCreation;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static void AddObjectToAsset(UnityEngine_CoreModule::UnityEngine::Object* objectToAdd, UnityEngine_CoreModule::UnityEngine::Object* assetObject);
		static bool DisplayDialog(mscorlib::System::String* title, mscorlib::System::String* message, mscorlib::System::String* ok);
		static bool DisplayDialog(mscorlib::System::String* title, mscorlib::System::String* message, mscorlib::System::String* ok, mscorlib::System::String* cancel);
		static void DisplayProgressBar(mscorlib::System::String* title, mscorlib::System::String* info, float progress);
		static bool DisplayCancelableProgressBar(mscorlib::System::String* title, mscorlib::System::String* info, float progress);
		static void ClearProgressBar();
		static bool MoveAssetToTrash(mscorlib::System::String* path);
		static void SaveAssets();
		static void SetDirty(UnityEngine_CoreModule::UnityEngine::Object* target);
		static void SetDirty(UnityEngine_CoreModule::UnityEngine::Object* target, bool saveAssets);
		static void UndoRecordObject(UnityEngine_CoreModule::UnityEngine::Object* objectToUndo, mscorlib::System::String* undoMessage);
		static void UndoRecordObject(UnityEngine_CoreModule::UnityEngine::Object* objectToUndo, mscorlib::System::String* undoMessage, bool saveAssets);
		static void UndoRecordObjects(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* objectsToUndo, mscorlib::System::String* undoMessage);
		static void UndoRecordObjects(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* objectsToUndo, mscorlib::System::String* undoMessage, bool saveAssets);
		static void _cctor();
	};
}


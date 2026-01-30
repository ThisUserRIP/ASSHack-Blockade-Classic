#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity::Gameroom { struct GameroomFacebook_OnComplete; };

namespace Facebook_Unity::Facebook::Unity::Gameroom
{
	struct IGameroomWrapper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* get_PipeResponse();
		void set_PipeResponse(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Object>* value);
		void Init(Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* completeDelegate);
		void DoLoginRequest(mscorlib::System::String* appID, mscorlib::System::String* permissions, mscorlib::System::String* callbackID, Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* completeDelegate);
		void DoPayRequest(mscorlib::System::String* appId, mscorlib::System::String* method, mscorlib::System::String* action, mscorlib::System::String* product, mscorlib::System::String* productId, mscorlib::System::String* quantity, mscorlib::System::String* quantityMin, mscorlib::System::String* quantityMax, mscorlib::System::String* requestId, mscorlib::System::String* pricepointId, mscorlib::System::String* testCurrency, mscorlib::System::String* developerPayload, mscorlib::System::String* callbackID, Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* completeDelegate);
		void DoFeedShareRequest(mscorlib::System::String* appId, mscorlib::System::String* toId, mscorlib::System::String* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, mscorlib::System::String* pictureLink, mscorlib::System::String* mediaSource, mscorlib::System::String* callbackID, Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* completeDelegate);
		void DoAppRequestRequest(mscorlib::System::String* appId, mscorlib::System::String* message, mscorlib::System::String* actionType, mscorlib::System::String* objectId, mscorlib::System::String* to, mscorlib::System::String* filters, mscorlib::System::String* excludeIDs, mscorlib::System::String* maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, mscorlib::System::String* callbackID, Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* completeDelegate);
	};
}


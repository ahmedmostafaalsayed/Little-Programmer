# Translate an Excel sheet using IBM Language Translator service
# References:
# Watson Developer Cloud Python SDK https://github.com/watson-developer-cloud/python-sdk
# Watson Python SDK samples https://github.com/watson-developer-cloud/python-sdk
# Language Translator API Docs - Translate https://cloud.ibm.com/apidocs/language-translator#translate

from ibm_watson import LanguageTranslatorV3
from ibm_cloud_sdk_core.authenticators import IAMAuthenticator

# 1. Create an instance of the IBM Language Translator service https://cloud.ibm.com/catalog/services/language-translator
# 2. Get credentials from http://cloud.ibm.com/resources
apikey = "lhO3n7sGKv1ApBRrPvBKYRN5DeoWw37f4Qlh2Km6z-LT"
service_instance_url = "https://api.eu-de.language-translator.watson.cloud.ibm.com/instances/8c683985-cc48-464d-bb2c-8b5da64a0140"

# Initialize connection to the service instance
language_translator = LanguageTranslatorV3(
    version='2018-05-01',
    authenticator=IAMAuthenticator(apikey))
language_translator.set_service_url(service_instance_url)

# Text that we want to translate
text = "Good morning"

# Translate text
try:
	# model_id represents the translation: from-to
	response = language_translator.translate(text, model_id='en-ar')
	# HTTP status code 200 means successfull request
	if( response.status_code ) == 200:
		translation = response.get_result()["translations"][0]["translation"]
		print( translation )
	else:
		print( response.get_result() )
finally:
	pass